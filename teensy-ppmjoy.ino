/*
 * Author: Jurgen "PlantCorn" Schull <j.schull@plantcorn.com>
 * I originally created this for a mode 2 controller (Turnigy 9xr Pro) as most of the other
 * solutions available to me simply did not work or were too much of a pain.
 * things such as smartpropro plus did not work at all for me, and out of frustration I
 * created this. I calibrated the controller, and within minutes i was able to use my
 * favorite sims, I hope this also works for you. 
 * Be sure to upload to your teensy in serial+keyboard+mouse+joystick mode, 72mhz optimized
 * i used a Teensy 3.1 with ppm input on pin 10 and ppm ground to GND
*/

#include <PulsePosition.h>
PulsePositionInput joyIn;

void setup() {
    Joystick.useManualSend(true);
  joyIn.begin(10);
}


void loop() {
  int num;
  num = joyIn.available();
  if (num > 0) {
  Joystick.X(map(joyIn.read(4),1012, 2012, 0, 1024));//Pitch
  Joystick.Y(map(joyIn.read(2),1012, 2012, 0, 1024));//Roll
  Joystick.Z(map(joyIn.read(3),1012, 2012, 0, 1024));//Throttle
  Joystick.Zrotate(map(joyIn.read(1),1012, 2012, 0, 1024));
  Joystick.button(1, joyIn.read(5) >= 1900);
  Joystick.button(2, joyIn.read(6) >= 1900);
  Joystick.button(3, joyIn.read(7) >= 1900);
  Joystick.button(4, joyIn.read(8) >= 1900);
  }
  Joystick.send_now();
  delay(5);
}
