int potPin = 2;    // select the input pin for the potentiometer
int val = 0;       // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);  // declare the ledPin as an OUTPUT
}

void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  
  Serial.println(val);  // print out the value you read
  
  delay(1);        // delay in between reads for stability
}
