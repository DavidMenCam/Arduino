## PWM

Modulaccion Por ancho de curso 

Problema : Tengo un arduino que suministra 5 voltios 
                                (Un Led)
                                
                                
A : Mayor intesidad de corriente 
      El led brilla mas 
A Menor : Intensidad de corriente 
          El LED brilla menos 
(Ley de onn)

La intensidad es igual que el voltaje partido a la resistenia. 

Si aubimos o bajamos el voltaje haremos lo mismo que con la intesidad  - suponiendo que la resistencia del circuito es la misma
Entonces si conecto un LED con su resistencia de 220 TOMIOS 
A un voltaje de 5 voltios o de 3,3 voltios 

El LED brillara con 5 voltios y menos con 3,3 voltios .

### Que es un pulso 

Un Pulso Electrico es una señal de voltaje medida en el tiempo 

Los ojos humanos podemos detectar cambios hasta entorno a 12 h3

A partido de 24 a 30 h3 no somos capaces visualmente 
Los pulsos modeulados crean la ilusion de voltajes intermedios entre 0 y 5 voltios 
  Para ello isan pulsos muy gordos 
  
  Por otrro lado un numero entre 0 y 255 
  
  
  
## Lampara de colores 

Este proyecto lo realicé junto a David y Christian.

Para este proyecto necesitamos 3 fototransistores que detectan la luz, cada fototransistor sera un color, vamos a tener uno rojo otro azul y otro verde. Dependiendo de la cantidad de luz que detecte el fototransistor sera la potencia que brille ese color.

Aqui esta el codigo

[Codigo original](https://github.com/DavidMenCam/Arduino/blob/main/arduino_ver_7.ino)

Luego realizamos una varienate usando el mismo codigo petro cambiando los fototransistores por unos potenciadores para asi poder regular mejor la potencia que queremos que brille cada color.

Aqui una imagen para mostrar como se monta el circuito.

[variacion 1](https://github.com/DavidMenCam/Arduino/blob/main/lampara_colores_variacion1/lampara_colores_variacion1.ino)

Luego realizamos esta variable, la cual consistía en dos grandes cambios en el código y en protoboard:

En el código, el greenValue probamos a ponerle un valor de 10, así igual en blue y redValue.

En la protoboard, cambiamos los potenciadores por botones y, al mantenerlos pulsados, los LEDs se iluminan lentamente y al llegar a un punto determinado de brillo se apagan automáticamente.

Este es el codigo de esta variante

