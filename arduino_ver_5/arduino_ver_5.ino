int estadoBotonPin2 = 0;
int estadoBotonPin3 = 0;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  estadoBotonPin2 = digitalRead(2);
  estadoBotonPin3 = digitalRead(3);
  Serial.print("Estado del botón 2: ");
  Serial.println(estadoBotonPin2);
  Serial.print("Estado del botón 3: ");
  Serial.println(estadoBotonPin3);


  if (estadoBotonPin3 == LOW) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
  }
if (estadoBotonPin2 == LOW) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
  }
if (estadoBotonPin3 == HIGH && estadoBotonPin2 == HIGH ){
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(500);
      
      }
if (estadoBotonPin3 == LOW && estadoBotonPin2 == LOW ){
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
}

 } // la llave del loop

 
  

 
  
  
