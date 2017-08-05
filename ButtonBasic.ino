
// adafruit stuff
:
:
byte changeButton = 2; // wire button to connect pin to Gnd when pressed
byte programSelect = 0;

void setup(){
// adafruit stuff
:
:
pinMode (changeButton, INPUT_PULLUP); //
}

void loop(){
if (digitalRead(changeButton == LOW){ // requires user to press & hold button near end of a routine to go on to the next one, otherwise repeat current
programSelect = programSelect +1;
  if (programSelect == 10){  
  programSelect = 0; // reset, assume 10 programs, #0 to #9
  }
}
switch (programSelect){
case 0:
// adafruit routine
break;
case 1:
// adafruit routine
break;
case 2:
// adafruit routine
break;
case 3:
// adafruit routine
break;
case 4:
// adafruit routine
break;
case 5:
// adafruit routine
break;
case 6:
// adafruit routine
break;
case 7:
// adafruit routine
break;
case 8:
// adafruit routine
break;
case 9:
// adafruit routine
break;
} // end switch
} // end loop
