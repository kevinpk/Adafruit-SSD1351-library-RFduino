#README
###This is a simple port of the Adafruit SSD1351 library to work with an RFduino. test.ino works with the below wiring. You'll notice Serial.begin is commented out. This is to greatly improve the speed of the graphics test (test.ino).

Wire up your OLED as follows:

* GPIO5...MOSI
* GPIO4...SCK
* GPIO2...DC
* RESET...RESET
* GPIO6...OLED/CS
* 3.3V....Vin(+)
* GND.....GND(G)

##Displaying Images From Flash Memory
bmp.ino is not going to work with the RFduino using the code in this repo. However, we have found a solution that is better for some users, which is storing and displaying images directly from the onboard flash memory. You can test this by running the ‘drawImageTest.ino’ sketch. Be sure you first add the RGB565-library to your Arduino environment’s Libraries folder. 
##To display your own images takes a few more steps, but it’s easy:
1. Crop your image into a square, then reduce the image size to exactly 128 x 128 pixels
2. Upload your image to [Henning Karlsen’s RGB565 Image Converter site](http://www.henningkarlsen.com/electronics/t_imageconverter565.php)
3. Download the resulting c file and add it to the RGB565-library folder. Also generate an empty .h file with the same name. (There is probably a better way to do this, but hey it works.)
4. Follow the example sketch (drawImageTest.ino) for how to import the array and print to the screen.

###NOTE the 128x96 SSD1351 OLED will also work with a few minor tweaks to the code, which is left as an exercise. 