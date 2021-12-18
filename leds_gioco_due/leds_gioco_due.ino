#include <FastLED.h>

#define DATA_PIN 9
#define NUM_LEDS    144
#define BRIGHTNESS  50
#define FRAMES_PER_SECOND 10

CRGB leds[NUM_LEDS];

uint8_t colorIndex[NUM_LEDS];

DEFINE_GRADIENT_PALETTE(heatmap_gp) {
    0,  255,  255,    255,  //orange
  100,  0,  0,    0,  //red
  255,   255,   255,    255,  //black
};

CRGBPalette16 myPal = heatmap_gp;

void setup() {
  digitalWrite(8,OUTPUT);
  delay(1000);
  LEDS.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  LEDS.setBrightness( 120 );
  LEDS.setTemperature(Candle);

  for (int i=0; i<NUM_LEDS; i++) {
    colorIndex[i] = random8();
  }
  
}

bool state = true;

int i = 20;

void loop() {

//  for (uint8_t i=0; i<NUM_LEDS; i++) {
//    leds[i] = ColorFromPalette(myPal, colorIndex[i]);
//  }
//
//  EVERY_N_MILLISECONDS(5) {
//    for (uint8_t i=0; i<NUM_LEDS; i++) {
//      colorIndex[i]++;
//    }
//  }
//
//  
  
  leds[i].r = 255;
  leds[i].g = 255;
  leds[i].b = 255;
  LEDS.show();

  delay(1000);
  i++;
  leds[i-1].r = 0;
  leds[i-1].g = 0;
  leds[i-1].b = 0;
//    

}
