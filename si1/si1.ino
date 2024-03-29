int sensorValue;
int sensorLow = 1023;
int sensorHigh = 5;
const int ledPin = 13;
void setup() {
   
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  while (millis() < 2000) {
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow){
      sensorLow = sensorValue;
    }
   }
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(A0);
  int pitch = 
  map(sensorValue,sensorLow,sensorHigh,50,4000);
  Serial.println(sensorValue);
  tone(8,pitch,20);
  delay(10);
}
