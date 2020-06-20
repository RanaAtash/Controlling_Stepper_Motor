#include <Stepper.h>

// define the number of steps per revolution
const int stepsPerRevolution = 32;  
// initialize the stepper motor object and connect it to Arduino pins from 2 to 5
Stepper stepperMotor(stepsPerRevolution, 2, 4, 3, 5);
// define the mber of steps the motor has taken
int stepCount;  

void setup() {
  // the setup has already done by initializing the stepper motor object
}

void loop() {
  // rotate clockwise 1/2 turn quickly
  stepCount = stepsPerRevolution / 2;
  stepperMotor.setSpeed(800);
  stepperMotor.step(stepCount);
  delay(2000);
   
}
