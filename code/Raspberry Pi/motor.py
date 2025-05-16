import RPi.GPIO as GPIO
import time

IN1 = 17
IN2 = 18
IN3 = 27
IN4 = 22

step_sequence = [
    [1, 0, 0, 1],
    [1, 0, 0, 0],
    [1, 1, 0, 0],
    [0, 1, 0, 0],
    [0, 1, 1, 0],
    [0, 0, 1, 0],
    [0, 0, 1, 1],
    [0, 0, 0, 1],
]


def rotate_steps(steps, delay=0.002):
    GPIO.setmode(GPIO.BCM)

    pins = [IN1, IN2, IN3, IN4]
    for pin in pins:
        GPIO.setup(pin, GPIO.OUT)
        GPIO.output(pin, False)

    try:
        for _ in range(steps):
            for step in step_sequence:
                for pin, value in zip(pins, step):
                    GPIO.output(pin, value)
                time.sleep(delay)
    finally:
        GPIO.cleanup()
