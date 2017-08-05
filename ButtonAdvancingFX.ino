
// The WS2812FX is used in this sketch: https://github.com/kitesurfer1404/WS2812FX
// All cred goes to this developer
// I have started building this also based on the basic button systems
// This was designed for my wife who wanted more control over her infinity mirror
#include <WS2812FX.h>

#define LED_COUNT 107
#define LED_PIN 6

WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
byte changeButton = 2; // wire button to connect pin to Gnd when pressed
byte programSelect = 0;

void setup() {
  ws2812fx.init();
  ws2812fx.setBrightness(250);
  ws2812fx.setSpeed(100);
  ws2812fx.start();
  pinMode (changeButton, INPUT_PULLUP); //
}

void loop() {
if (digitalRead(changeButton == LOW)){ // requires user to press & hold button near end of a routine to go on to the next one, otherwise repeat current
programSelect = programSelect +1;
  if (programSelect == 10){  
  programSelect = 0; // reset, assume 10 programs, #0 to #9
  }
}
switch (programSelect){
case 0:
  ws2812fx.setMode(FX_MODE_RAINBOW_CYCLE);
break;
case 1:
  ws2812fx.setMode(FX_MODE_THEATER_CHASE_RAINBOW);
break;
case 2:
  ws2812fx.setMode(FX_MODE_MERRY_CHRISTMAS);
break;
case 3:
  ws2812fx.setMode(FX_MODE_CHASE_RANDOM);
break;
case 4:
  ws2812fx.setMode(FX_MODE_FIREWORKS);
break;
case 5:
  ws2812fx.setMode(FX_MODE_HYPER_SPARKLE);
break;
case 6:
  ws2812fx.setMode(FX_MODE_SCAN);
break;
case 7:
  ws2812fx.setMode(FX_MODE_MULTI_DYNAMIC);
break;
case 8:
  ws2812fx.setMode(FX_MODE_CHASE_BLACKOUT);
break;
case 9:
  ws2812fx.setMode(FX_MODE_COMET);
break;
} // end switch
} // end loop
