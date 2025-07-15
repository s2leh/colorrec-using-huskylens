HuskyLens Color Recognition with Arduino Uno

This project demonstrates how to use the HuskyLens AI camera in color recognition mode with an Arduino Uno. The system identifies pre-learned colors and displays their names via the Serial Monitor.

⸻

Project Overview
Goal: Use HuskyLens in Color Recognition mode to detect specific colors and identify them through Arduino.
	Function Used: Color Recognition
	Colors Trained:
  ID 1: Yellow
  
	ID 2: Green
 
	ID 3: Blue

⸻

How It Works
	1.	The HuskyLens is connected to the Arduino Uno using SoftwareSerial.
	2.	The camera runs in Color Recognition Mode (configured via the HuskyLens device menu).
	3.	When a recognized color appears in the camera’s view, the Arduino reads its ID and prints a message with the color name.
