int dirpin = 8;
int steppin = 9;

void setup() {                
  pinMode(dirpin, OUTPUT);     
  pinMode(steppin, OUTPUT);
}

void loop() {
  int i;
  
  digitalWrite(dirpin, LOW);     // Set the direction.
  delay(100);

  
  for (i = 0; i<300; i++)       .
  {
    digitalWrite(steppin, LOW);  // This LOW to HIGH change is what creates the
    digitalWrite(steppin, HIGH); // "Rising Edge" so the easydriver knows to when to step.
    delayMicroseconds(1000);      // This delay time is close to top speed for this
  }                              // particular motor. Any faster the motor stalls.
        
}
