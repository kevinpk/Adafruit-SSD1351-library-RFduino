This is a simple port of the Adafruit SSD1351 library to work with an RFduino. test.ino works with the below wiring. bmp.ino is not tested with RFduino, but will easily work if you follow the wiring scheme below. You'll notice Serial.begin is commented out. This is to greatly improve the speed of the graphics test (test.ino).

Wire up your OLED as follows:

GPIO5...MOSI
GPIO4...SCK
GPIO2...DC
RESET...RESET
GPIO6...OLED/CS
3.3V....Vin(+)
GND.....GND(G)