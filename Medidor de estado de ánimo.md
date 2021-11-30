
                                                         16 de Noviembre de 2021
                                                         
# Medidor de estado de ánimo

## Proyecto

Hoy he realizado el proyecto Medidor de estado de ánimo con [Miguel Ángel](https://github.com/miguelamgel1107) y [Christian](https://github.com/Tabrih) .

Consiste, gracias a un servomotor, en hacer un calibrador de estado de ánimo según los estados que hemos puesto personalmente ese día.

## Resumen 

## Código

Este es el código entero de este proyecto


```C++

#include <Servo.h>
Servo myServo;
int const potPin = A0;
int potVal;
int angle ;
void setup() {
  myServo.attach(9);


  Serial.begin(9600);
  }

void loop(){
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.println(angle);
  myServo.write(angle);
  delay(15);
}
```





## Variaciones
