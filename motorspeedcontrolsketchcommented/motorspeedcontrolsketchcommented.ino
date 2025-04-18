/*Define pin assignments for the eight motor drivers
Declares integer variables and assigns them to digital pin numbers of the Arduino.

(m1-m16) are the control pins that determine the 
direction of rotation of the motors connected to the motor drivers.

(en1-en8) are the enable pins that control the speed of the motors
 connected to the motor drivers using Pulse Width Modulation (PWM).
*/
int m1=51, m2=49, en1=2;
int m3=43, m4=45, en2=3;
int m5=47, m6=22, en3=4;
int m7=23, m8=25, en4=5;
int m9=27, m10=29, en5=6;
int m11=31, m12=33, en6=7;
int m13=35, m14=37, en7=8;
int m15=39, m16=41, en8=9;

/*Potentiometer Pins and Storage Variables
These lines declare integer variables for the analog input pins connected to the potentiometers 
 (pot1 to pot8). They also declare integer variables(st1 to st8) which will store the 
 processed readings from the respective potentiometers.
*/
int pot1=A0, st1=0;
int pot2=A1, st2=0;
int pot3=A2, st3=0;
int pot4=A3, st4=0;
int pot5=A4, st5=0;
int pot6=A5, st6=0;
int pot7=A6, st7=0;
int pot8=A7, st8=0;

void setup()/* Runs once when the Arduino board starts. 
It configures the digital pins that are connected to the motor drivers as output pins.

The analog input pins for the potentiometers are automatically configured as input by 
the analogRead() function in the loop().*/
 {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(en1, OUTPUT);

  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(en2, OUTPUT);

  pinMode(m5, OUTPUT);
  pinMode(m6, OUTPUT);
  pinMode(en3, OUTPUT);

  pinMode(m7, OUTPUT);
  pinMode(m8, OUTPUT);
  pinMode(en4, OUTPUT);

  pinMode(m9, OUTPUT);
  pinMode(m10, OUTPUT);
  pinMode(en5, OUTPUT);

  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(en6, OUTPUT);

  pinMode(m13, OUTPUT);
  pinMode(m14, OUTPUT);
  pinMode(en7, OUTPUT);

  pinMode(m15, OUTPUT);
  pinMode(m16, OUTPUT);
  pinMode(en8, OUTPUT);

}

void loop()
/*Reading Potentiometer Values - analogRead(pot1-8) reads the analog voltage value from the potentiometers connected to pin A0-A7. 
This value will be between 0 and 1023 (for a 10-bit ADC). The result is then divided by 4. 
This scaling is done to map the 0-1023 range to a smaller range suitable for controlling 
the motor speed ( 0-255 for analogWrite).

Controlling Motor Speed - analogWrite() is used on the enable pins (en1-8) of the motor drivers. 
This function generates a PWM signal with a duty cycle proportional to the value of st1. By varying 
the duty cycle, the average voltage supplied to the motor is changed, thus controlling its speed.

Controlling Motor Direction - digitalWrite() is used on the two control pins (m1 and m2) of the first motor driver. By setting one pin
HIGH and the other LOW, the direction of current flow through the motor is determined, causing it to rotate in one direction.
*/ 
{
  st1=analogRead(pot1)/4;
  analogWrite(en1, st1);
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  
  st2=analogRead(pot2)/4;
  analogWrite(en2, st2);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);

  st3=analogRead(pot3)/4;
  analogWrite(en3, st3);
  digitalWrite(m5, HIGH);
  digitalWrite(m6, LOW);

  st4=analogRead(pot4)/4;
  analogWrite(en4, st4);
  digitalWrite(m7, HIGH);
  digitalWrite(m8, LOW);

  st5=analogRead(pot5)/4;
  analogWrite(en5, st5);
  digitalWrite(m9, HIGH);
  digitalWrite(m10, LOW);

  st6=analogRead(pot6)/4;
  analogWrite(en6, st6);
  digitalWrite(m11, HIGH);
  digitalWrite(m12, LOW);

  st7=analogRead(pot7)/4;
  analogWrite(en7, st7);
  digitalWrite(m13, HIGH);
  digitalWrite(m14, LOW);

  st8=analogRead(pot8)/4;
  analogWrite(en8, st8);
  digitalWrite(m15, HIGH);
  digitalWrite(m16, LOW);

}