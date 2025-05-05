/*
  GPIO Interrupt mode test code. 
  Use Numaker-UNO-M4 board. 
  Connect D2 and D10.
*/This example code test the ADC function.

#define TEST_ADC

// These constants won't change. They're used to give names to the pins used:
#ifdef TEST_ADC
const int analogInPin = A5;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0;  // value read from the pot
#endif


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
#ifdef TEST_ADC
  //ADC test
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  //map it to the range of the analog out:
  //outputValue = map(sensorValue, 0, 1023, 0, 255);
  
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  //Serial1.print("\t output = ");
  //Serial1.print(outputValue);
#endif
 
  // wait 1 seconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(1000);
}
