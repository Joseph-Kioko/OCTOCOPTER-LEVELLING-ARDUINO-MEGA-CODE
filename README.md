The code below is meant to control the motors of an octocopter independently using potentiometers.
The potentiometers have 3 pins; a power supply pin(VCC), ground(GND) and  Output(OUT) pin.
As one varies the resistance of the potentiometer, the change in resistance generates a variable output voltage which is an analogue signal. 
The output pin of the PoT is connected to a specified analogue pin on the Arduino Mega. 
The Arduino Mega through the directions of the input code generatesan equivalent PWM SERVO digital signal at a specified digital pin. 
Each Digital pin is connected to an Electonic Speed Controller (ESC).
An Esc has 3 pins, an Imput voltge pin(Vin), Ground (GND) and 
