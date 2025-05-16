from flask import Flask, render_template, jsonify, redirect, url_for, request, Response
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

app = Flask(__name__)

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
    return render_template("homescreen.html")


@app.route("/camera")
def camerascreen():
    return render_template("camerascreen.html")


@app.route("/pulse")
def pulsescreen():
    return render_template("pulsescreen.html")


@app.route("/menu")
def menuscreen():
    return render_template("menuscreen.html", direction=direction)
