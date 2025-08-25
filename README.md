Project: Obstacle-Following Robot
Overview
This project is an autonomous robot that navigates around obstacles using infrared (IR) sensors and DC motors. Built during middle school, it introduced me to sensor calibration, obstacle detection, and autonomous navigation. The robot demonstrates how environmental input can be converted into real-time mechanical actions.

How It Works
IR Sensors (Input):
  Two IR sensors detect obstacles by measuring reflected infrared light.
  When an object is close, the sensor value rises, allowing the Arduino to detect potential collisions.
  The sensor pins used are A2 (right) and A4 (left).

Arduino Logic:
Both sensors detect no obstacle → move forward.
Right sensor detects obstacle → turn left.
Left sensor detects obstacle → turn right.
Both sensors detect obstacles → stop.

Motors (Output):

Two DC motors are controlled using digital pins 8, 9, 11, and 12.
Motor directions are adjusted based on sensor input to navigate around obstacles.
Hardware Components
  Arduino Uno
  2 IR Sensors
  2 DC motors + chassis
  Wheels and sensor base
  Connecting wires and computer for programming and power

Skills & Concepts Learned
  Sensor Calibration: Learned to interpret analog IR sensor readings and adjust thresholds for obstacle detection.
  Motor Control: Coordinated motor outputs to enable autonomous navigation.
  Programming: Implemented conditional logic to respond to multiple sensor inputs.
  Debugging & Testing: Monitored sensor values using Serial.println() to refine behavior.
  Systems Thinking: Gained experience combining sensors, code, and actuators into a functioning robot.

Note: I implemented this project once on an Arduino Nano and once on an Arduino Uno. The logic remained the same; only wiring and sensor calibration were slightly adjusted for each board.

Code Highlights
  analogRead() used to capture IR sensor readings in real time.
  Conditional statements map sensor values to movement: forward, left, right, or stop.
  Serial.println() used to monitor sensor readings and calibrate thresholds during testing.
  Digital pins 8, 9, 11, 12 control motor directions based on sensor input.

Possible Improvements
If I were to revisit this project today, I would: Document wiring and calibration with diagrams for clarity.
