# LedDotMatrix8x8
This is a small library I made at the age of 11 for controlling a simple 8x8 led matrix display using an Arduino board.

**Warning: This project is currently arhived and should not be used for production as it is rather janky. It was just a way for me to learn how to create a library and that's pretty much it.**

The available keywords are these:
  - To start the library: LedDotMatrix8x8 myMatrix(pinX1, pinX2, pinX3, pinX4, pinX5, pinX6, pinX7, pinX8, pinY1, pinY2, pinY3, pinY4, pinY5, pinY6, pinY7, pinY8); where pinAN is the pin for the (A) axis' (N)th row/column. if your matrix has the X axis (rows) as cathode, please add the Y axis first
  - dotOn(pinX, pinY);: turns on the specified pin.
  - dotOff(pinX, pinY);: turns off the specified pin.
  - allOn();: turns on all dots on the matrix.
  - allOff();: turns off all dots on the matrix.
  - blinkDot(pinX, pinY, blink interval in ms);: blinks a specific dot. 
  - blinkAll(blink interval in ms);: blinks the whole display on and off.

# to install the libary please visit arduino.cc/en/Guide/Libraries/
