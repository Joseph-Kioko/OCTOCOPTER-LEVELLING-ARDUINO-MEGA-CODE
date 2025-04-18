An Arduino Mega was used for this project which was manual horizontal levelling of an octocopter using potentiometers.
The code below is meant to control the motors of an octocopter independently using potentiometers.
The potentiometers have 3 pins; a power supply pin(VCC), ground(GND) and  Output(OUT) pin.
Each Digital pin is connected to an Electonic Speed Controller (ESC).
An Esc has 3 pins, an Input voltge pin(Vin), Ground (GND) and a throttle input wire. The throttle input wire is connected to a PWM capable digital pin.

It all starts with the battery. One plugs the battery into the power board. The power board distributes power to each motor via the ESCs.
The Arduino Mega can be powered from the power board, which has a voltage regulator that sets the voltage to about 5V, which is the safe optimum working voltage for the board. One can also power it via its USB Type A.
As one varies the resistance of a potentiometer, this varies the voltage. The change in voltage due to the variable resistance offered by the potentiometer is an analog signal.  The analog signal is sent to the corresponding analog pin on the Arduino Mega through the middle pin of the potentiometer. 
The Arduino Mega converts the analog signal into a digital PWM signal at the specified digital pin through the input code. 
PWM stands for Pulse Width Modulated signal.
To generate a PWM signal, the board rapidly switches on and off a pin to typically generate a square wave. The board also controls how long the pin is either on or off. This is called the duty cycle, the percentage or fraction of time the pin is on.
A low duty cycle, say 0%, equates to 0 V, which lowers the power to either zero or the lowest power setting available.
A high duty cycle, say 80%, equates to about 4V, which raises the power to near the maximum power rating or setting.

Also crucial in understanding PWM signals is frequency.
Frequency is the number of cycles per second.
PWM serves as a technique for converting high-frequency pulses into low-frequency output signals.
Our ESCs expect a servo PWM, generated using the Servo Library.
Each digital pin is connected to an ESC. After the PWM signal is generated, it is sent to the ESC.
The average voltage the PWM supplies is calculated as shown below;
Vavg = Duty Cycle × Vsupply
​


An ESC converts the PWM signals into 3-phase AC power for brushless motors.
It also(The ESC) handles timing, current regulation, and motor synchronization.
 The power supplied to the motor drives it to rotate its rotor and propeller.

Say that at a potentiometer, we vary the voltage to:
i.) Low resistance - Low analogue signal - Low servo PWM -  Low power supplied - Low motor speed - Low thrust.

ii.)High resistance - High analogue signal - High servo PWM -  High power supplied - High motor speed - High thrust.

NB: The circuit isn’t using any of the standard communication protocols. For reading the potentiometers, it's the analog signal tapped from the middle pin that communicates the changes, while for the ESCs, it's the Servo PWM that delivers the voltage they should supply to the motors.
