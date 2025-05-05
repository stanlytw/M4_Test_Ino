/*
  GPIO mode test code. 
  Use Numaker-UNO-M4 board. 
  Toggle two LEDs, D7 and D8.
*/

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED_BUILTIN, OUTPUT);
 
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  

  Serial.begin(9600);//VCOM
}

int kk=0;
void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
    
  delay(1000);                      // wait for a second
  //digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);
  
  delay(1000);                      // wait for a second

  if(kk<100)kk++;
  else kk=0;
  Serial.print("**Serial: VCOM test loop:");
  Serial.println(kk, DEC);
}
