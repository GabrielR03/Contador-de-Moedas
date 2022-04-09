#include <Stepper.h>

const int stepsPerRevolution = 200; // Correct for my 1.8deg step motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int i=0;

void setup() {
  // nothing to do inside the setup
}

void loop() {
  if(i<20){
    myStepper.setSpeed(120);
  // step 1/100 of a revolution:
  myStepper.step(stepsPerRevolution / 100);
  i++;
  }
}


