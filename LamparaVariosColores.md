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

Hemos hecho una lampara algo dificl de hacer pero con un funcionamiento simple basicamente junto con christian y miguel angel hemos hecho que la lampara brille de varios colores depende que potencias gires dependera del color del LED.

Aqui esta el codigo original sin ninguna variante 

[Codigo principal](https://github.com/DavidMenCam/Arduino/blob/main/arduino_ver_7.ino)

Despues hemos cambiadp el codigo haciendo una variacion , en esta variacion hemos sustituidos las potencias por los botones y cada boton era una luz y esa luz podias hacer que manteniendolo pulsado brillase mas y se apagase despues de un rato automaticamente 

[Variacion 1](https://github.com/DavidMenCam/Arduino/blob/main/lampara_colores_variacion1/lampara_colores_variacion1.ino)
