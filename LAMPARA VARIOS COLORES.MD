## PWM (Pulse With Modulation)

¿Como Dimmer

Problema:
Tengo un Arduino que suministra su A a un LED.
A mayor intensidad de corriente(A) el LED
A menor intensidad de corriente el LED brilla menos



Si subimos o bajamos la corriente 
A  un votaje de 5v o de 3v
el LED brillará más con 5v y menos con 3'3v
los pulsos modulados en ancho crean la ilusión de voltajes intermedios entre 0 y 5v
para ello usan pulsos muy cortos
Quen usaremos a través de cunción
Analog write(Pin, 0-255);
ESta funcíon solo funciona en pines con PWM
LOSC PINES CON PWM ESTÁN MARCADOS (CON el símbolo ~ (la tilde de la ñ))
La funcíon nos pide 2 cosas
por un lado (y lo primero) el número de pin 
Por otro lado un Número entre 0 y 255

0 →→→→→ 0%
255 →→→→→ 100% de voltaje (5v)
sting → cadena de caracteres
bool → booleano y es verdadero (true) falso (false)
char → 1 unico carcter
jloat → números decimales

### CODIGO Y PROYECTO FÍSICO

Leer PINA0
            »»» analog Read » 0-1023 (8 bytes)
transforma los valores
                       y 
                         de regalo, las pinta en pantalla
-Digital write (DW para abreviar) es una función que nos pide un número de pin y el valor high (1) o low (0).
Si el valor es high, la placa suministrará 5v en ese pin.
Si el valor es low(0), la placa suministrará 0v en ese pin.
Si hay 5v, se activará los circuitos* si es 0v no sé activarán.

### EJERCICI0 1
```c++

int estadoBotonPin2 = 0;
int estadoBotonPin3 = 0;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  estadoBotonPin2 = digitalRead(2);
  estadoBotonPin3 = digitalRead(3);
  Serial.print("Estado del botón 2: ");
  Serial.println(estadoBotonPin2);
  Serial.print("Estado del botón 3: ");
  Serial.println(estadoBotonPin3); 
  //MIS BOTONES CUANDO SE PULSAN SON LOW
  if ( estadoBotonPin2 == LOW
    &&
     estadoBotonPin3 == LOW) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
 }
 else {
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
 }
}//llave del loop

```

![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-11-03%2013-07-26.png?raw=true)

los ejercicios actualmente completados resultaron ser muy parecidos en cuestión de programación por tener codigos muy similares (exactamente los mismos) epro con algunos ligeros cambios que hacían que el rsultado de cada ejercicio se totalmente distinto

### arduino proyecto de luces

![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-11-09%2012-34-21.png?raw=true)

esta es la parte de la programacion de el led que cambia de colores.

En principio lo estuve haciendo con el compañero Ismael pero a medias debido a su ausencia tuve que tomar el cargo completo del proyecto, sin embargo estoy agradecido con el con la ayuda que me dio.


## Código

Este es el código:

[Código](https://github.com/Samael696/arduino/blob/main/lampara_varios_colores.ino)

Esta es la parte donde se encienden los leds. Sin esta parte el led jamás se encenderá:

```C++

analogWrite(redLEDPin, redValue) ;
analogWrite(greenLEDPin, greenValue) ;
analogWrite(blueLEDPin, blueValue) ;

```







![](https://github.com/Samael696/arduino/blob/main/IMG_20211109_135149.jpg?raw=true)


Por poco pude concluir el proyecto debido a una falla en el led, uno de los colores no se dejaba notar (NO APARECIA) cabe decir que con ayuda del profesor hice muchos cambios que creiamos y eran necesarios para que el proyecto pueda funcionar como debe, cambiamos una resistencia, cambiamos unos cables de lado, y por un momento creí que el culpable de todo era el potenziometro pero con ayuda del monitor de arduino me di cuenta que estaba equivocado.
todo concluyó en un exito a medias ya que la luz roja nunca apareció.

La culpa no era mía, era del led que tenía una parte mala, cambié de led y pudo funcionar al fin. 





















