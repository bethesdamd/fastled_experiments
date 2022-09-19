#include "FastLED.h"

//FIXED GLOBAL VARS
#define DATA_PIN 4        //Define led data pin, has to support PWM
#define LED_TYPE NEOPIXEL  //define type of led
#define NUM_LEDS 30        //num of leds in strip

struct CRGB leds[NUM_LEDS];  // Initialize LED array

void setup() {
  delay(2000);  //for safe startup
  FastLED.addLeds<LED_TYPE, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // leds[2] = CRGB::Blue;  //set the 7th LED to Blue
  fill_solid( leds, NUM_LEDS, CRGB::White);
  FastLED.show();        //start the leds
  delay(1000);
  fill_solid( leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
  delay(1000);
}