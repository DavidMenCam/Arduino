## Arduino

Primer error de Arduino :

avrdude: ser_open(): can't open device "/dev/ttyACM0": Permission denied

![](https://raw.githubusercontent.com/DavidMenCam/1er-trimestre/main/Error%20arduino%201.png)

El error es que no puede llegar al puerto 

## protoboard 

Es como un quit que no se necesita soldar y es como un conjunto de piezas de lego 

### curcuito simple 

5v---LED---GND

Este funciona pero tiene unos problemas 

1: La luz se calienta bastante y quema 

2: debido ha esto se puede fundir el LED

## curcuito con boton 

![](https://raw.githubusercontent.com/DavidMenCam/Arduino/main/arduino.png)

## circuito en serie 

Si se descinecta una de las partes no funciona 

![](https://raw.githubusercontent.com/DavidMenCam/Arduino/main/IMG_20211006_124850.jpg)

fuente : Christian

## circuito en paralelo 

este por ejemplo si se desconecta una parte sigue funcionando 

![](https://raw.githubusercontent.com/DavidMenCam/Arduino/main/IMG_20211006_123213.jpg)

## circuito en serie 2 

![](https://raw.githubusercontent.com/DavidMenCam/Arduino/main/unknown1.png)

## circuito paralelo 2 

![](https://raw.githubusercontent.com/DavidMenCam/Arduino/main/IMG_20211006_135739.jpg)

## Apuntes sobre Electricidad 

oltaje --> Altura (Diferencia de potencial)

Intensidad o Amperaje --> cantidad de agua o rotuladores

Resistencia --> Resistencia al paso del agua o rotulador

Intensidad = Voltaje ÷ Resistencia ---> Ley de Ohm

Voltaje = Intesidad x Voltaje

Resistencia = Voltaje ÷ Intensidad

### resistencia con LEDs

Tenemos 2 circuitos

Circuito 1 : 5V,GND 0V

Circuito 2 : 5V, bombilla, GND 0V

El voltaje de los dos circuitos es 5V.

Y la resistencia? Circuito 1, 1 Ohm Circuito 2 440 Ohms

5V ÷ 441 Ohms = 0,01133 A = 11,33 mA

5V ÷ 1 Ohm = 5 A

5V ÷ 0 Ohm = ∞ A (Cortocircuito) ---> Evitar

## Pruebas de morse 

-Esto es lo que hicimos en la prueba  Morse_1.

Hicimos en el código para cambiar el tiempo que el led brillaba . Para eso hicimos cambios en las lineas de delay

![](https://raw.githubusercontent.com/DavidMenCam/Arduino/main/Captura%20de%20pantalla%20de%202021-10-13%2012-49-56.png)


Aqui esta el [morse 1](https://github.com/DavidMenCam/Arduino/blob/main/morse_2/morse_2.ino)


