// sketch to test displaying images that are stored locally in flash memory
// DOES NOT USE OR REQUIRE SD CARD/READER
// Kevin Kelly and Jonas Sondergard
// Capital One Labs 2014

#define cs   6
#define dc   2
#define rst  -1  // you can also connect this to the Arduino reset

// Color definitions
#define	BLACK           0x0000

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1351.h>
#include <SPI.h>
#include <qr.h>
#include "qr.c"
#include <doge.h>
#include "doge.c"

Adafruit_SSD1351 tft = Adafruit_SSD1351(cs, dc, rst);

void drawImageFromMemory(const unsigned short imageArray[16384]) {
  for (uint8_t y=0; y < tft.height(); y++) {
    for (uint8_t x=0; x < tft.width(); x++) {
      tft.drawPixel(x, y, imageArray[x+y*128]);
    }
  }
}

void setup(void) {
  tft.begin();
}

void loop() {
//  tft.writeCommand(SSD1351_CMD_DISPLAYOFF);
  drawImageFromMemory(doge);
//  tft.writeCommand(SSD1351_CMD_DISPLAYON);
  delay(1000);
//  tft.writeCommand(SSD1351_CMD_DISPLAYOFF);
  drawImageFromMemory(qr);
//  tft.writeCommand(SSD1351_CMD_DISPLAYON);
  delay(1000);
}
