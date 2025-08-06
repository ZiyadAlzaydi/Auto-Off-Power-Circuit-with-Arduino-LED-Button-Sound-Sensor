# Auto-Off-Power-Circuit-with-Arduino-LED-Button-Sound-Sensor
This project lets you power on an Arduino using a push button or a sound sensor. Once triggered, the Arduino turns on, lights up an LED, waits for 10 seconds, and then shuts itself off automatically to save power.
![LA](https://github.com/user-attachments/assets/6655271a-d504-41de-9682-920140bf79ec)

What You Need

	•	Arduino Uno
	•	IRF4905 P-MOSFET
	•	S8050 NPN Transistor
	•	Push button
	•	Sound sensor
	•	White LED
	•	220Ω resistors (x2)
	•	100kΩ resistors (x3)
	•	10kΩ resistor (x1)
	•	1N4007 diodes (x2)
	•	9V battery

 How It Works
 
	•	When you press the button or make a sound, power flows to the Arduino.
	•	The Arduino turns on and keeps itself powered using digital pin 5.
	•	An LED connected to pin 4 turns on.
	•	After 10 seconds, the Arduino turns off the LED and then cuts its own power.
