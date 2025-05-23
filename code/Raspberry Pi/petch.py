from flask import (
    Flask,
    render_template,
    jsonify,
    redirect,
    url_for,
    request,
    Response,
    session,
)
import requests
import RPi.GPIO as GPIO
import random
import serial
import cv2
from picamera2 import Picamera2
from motor import rotate_steps
import threading
import json

heartrate = 80

size = 3

name = "Max"

app = Flask(__name__)
app.secret_key = "waverider"

picam2 = Picamera2()
picam2.configure(picam2.create_video_configuration(main={"size": (640, 480)}))
picam2.start()

direction = None

ARDUINO_IP = "http://192.168.3.73"


@app.route("/")
def startscreen():
    return render_template("startscreen.html")


@app.route("/leaving")
def leavingscreen():
    number = random.randint(1, 2)
    return render_template("travelscreen.html", number=number)


@app.route("/home")
def homescreen():
    dog_name = session.get("dog_name", "")
    return render_template("homescreen.html", dog_name=dog_name)


@app.route("/camera")
def camerascreen():
    return render_template("camerascreen.html")


@app.route("/pulse")
def pulsescreen():
    dog_name = session.get("dog_name", "")
    return render_template("pulsescreen.html", dog_name=dog_name)


@app.route("/graph")
def graphscreen():
    return render_template("graphscreen.html")


@app.route("/menu")
def menuscreen():
    return render_template("menuscreen.html", direction=direction)


@app.route("/mydog")
def dogscreen():
    return render_template("dogscreen.html", direction=direction)


@app.route("/preferences")
def prefscreen():
    return render_template("prefscreen.html", direction=direction)


@app.route("/return")
def endscreen():
    return render_template("endscreen.html")


@app.route("/set_direction/<int:value>")
def set_direction(value):
    global direction
    direction = value
    return redirect(url_for("menuscreen"))


@app.route("/rotate_motor", methods=["POST"])
def rotate_motor():
    try:
        rotate_steps(60, delay=0.003)
        return jsonify(
            {"status": "success", "message": "Motor rotated by 1/10th of a rotation!"}
        )
    except Exception as e:
        return jsonify({"status": "error", "message": str(e)}), 500


@app.route("/toy_on")
def toy_on():
    try:
        with serial.Serial("/dev/rfcomm1", 9600, timeout=2) as bt:
            bt.write(b"START\n")
        return (
            jsonify(
                {"status": "success", "message": "Sent START command via Bluetooth"}
            ),
            200,
        )
    except serial.SerialException as e:
        return jsonify({"status": "error", "message": str(e)}), 500


@app.route("/toy_off")
def toy_off():
    try:
        with serial.Serial("/dev/rfcomm1", 9600, timeout=2) as bt:
            bt.write(b"STOP\n")
        return (
            jsonify(
                {"status": "success", "message": "Sent STOP command via Bluetooth"}
            ),
            200,
        )
    except serial.SerialException as e:
        return jsonify({"status": "error", "message": str(e)}), 500


@app.route("/toy_extend", methods=["POST"])
def toy_extend():
    try:
        data = request.get_json()
        duration = int(data.get("duration", 0))
        if duration <= 0:
            return jsonify({"success": False, "error": "Invalid duration"}), 400

        with serial.Serial("/dev/rfcomm1", 9600, timeout=2) as bt:
            command = f"EXTEND:{duration}\n"
            bt.write(command.encode())

        return jsonify(
            {
                "success": True,
                "message": f"Sent EXTEND command with duration {duration}ms via Bluetooth",
            }
        )
    except Exception as e:
        return jsonify({"success": False, "error": str(e)}), 500


def generate_frames():
    while True:
        frame = picam2.capture_array()
        _, buffer = cv2.imencode(".jpg", frame)
        frame_bytes = buffer.tobytes()
        yield (
            b"--frame\r\n" b"Content-Type: image/jpeg\r\n\r\n" + frame_bytes + b"\r\n"
        )


@app.route("/video_feed")
def video_feed():
    return Response(
        generate_frames(), mimetype="multipart/x-mixed-replace; boundary=frame"
    )


@app.route("/get_heartrate")
def get_heartrate():
    global heartrate
    dog_name = session.get("dog_name", "Max")
    if heartrate < 70:
        status = f"{dog_name} is aan het slapen"
    elif heartrate < 110:
        status = f"{dog_name} voelt zich kalm"
    else:
        status = f"{dog_name} voelt zich wat gespannen"
    return jsonify({"heartrate": heartrate, "status": status})


@app.route("/save_name", methods=["POST"])
def save_name():
    data = request.get_json()
    session["dog_name"] = data.get("name", "Max")
    return jsonify({"status": "success", "name": session["dog_name"]})


def read_encoder_from_bluetooth():
    global heartrate
    try:
        bt_serial = serial.Serial("/dev/rfcomm0", 9600, timeout=1)
        while True:
            try:
                line = bt_serial.readline().decode().strip()
                if line:
                    data = json.loads(line)
                    if "encoder" in data:
                        heartrate = data["encoder"]
                        print("Updated heartrate:", heartrate)
            except (json.JSONDecodeError, UnicodeDecodeError):
                continue
    except serial.SerialException as e:
        print("Bluetooth serial error:", e)


threading.Thread(target=read_encoder_from_bluetooth, daemon=True).start()

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=7777, debug=False)
