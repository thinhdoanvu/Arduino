# Error in Linux
## Error opening serial port '/dev/ttyUSB0'. Try consulting the documentation at http://playground.arduino.cc/Linux/All#Permission
Method:
  1. ls -l /dev/ttyUSB0
  2. sudo chmod a+rw /dev/ttyUSB0
