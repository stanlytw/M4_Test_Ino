/*
  PWM mode test code. 
  Use Numaker-UNO-M4 board. 
  Light on LED D8 in a breath-like way.
*/

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/
#define TEST_PWM


#ifdef TEST_PWM
const int analogOutPin = D8;  // Analog output pin that the LED is attached to
int dacoutputValue = 1000;  // dacvalue output to the PWM (analog out)
#endif

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
#ifdef TEST_PWM
  //DAC test 
  if(dacoutputValue < 1000)
      dacoutputValue+=100;
  else 
      dacoutputValue = 0;

  // change the analog out value:
  analogWrite(analogOutPin, dacoutputValue);
  Serial.print("dac(pwm) output = ");
  Serial.println(dacoutputValue);
#endif  
  // wait 1 seconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(1000);
}
