# Teensy-ppmjoy
A PPM to joystick converter/emulator written for the Teensy 3.1

## About
Out of frustration with smartpropo plus and other solutions for the turnigy 9xr pro radio,
which simply did not work correctly for me, I decided to use my teensy 3.1 as a
PPM decoder/joystick emulator. Hopefully you will find it useful as well if these things have not worked for you.

## Installation/Uploading
1. Paul Stoffregen had created a really neat ppm decoder
library, without which this would probably not have been easy. (https://github.com/PaulStoffregen/PulsePosition)
download, unzip, and place into your arduino/libraries folder, renaming the folder to PulsePosition.

2. Load the .ino file in the arduino IDE, for clarity, I used version 1.6.5 to create and upload teensy-ppmjoy. Hit upload.

3. Connect the PPM signal to pin 10, and the PPM ground to GND. remove your transmitter module, crystal or disable transmitter circuitry BEFORE TURNING ON to prevent overload or damage to your transmitter, for which I cannot be held responsible.

4. Calibrate your joystick, you may need to adjust some trims if you find that your joystick goes the opposite direction or back to neutral when fully to the left or down. a good step is to create a new model specifically for your pc, so we don't mess up your main trims.

5. "Fly!" You should now be ready to try out your desired simulator, just select the teensy as your input device.
