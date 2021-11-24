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

´´´c++
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

´´´

![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-11-03%2013-07-26.png?raw=true)

los ejercicios actualmente completados resultaron ser muy parecidos en cuestión de programación por tener codigos muy similares (exactamente los mismos) epro con algunos ligeros cambios que hacían que el rsultado de cada ejercicio se totalmente distinto

### arduino proyecto de luces

![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-11-09%2012-34-21.png?raw=true)

esta es la parte de la programacion de el led que cambia de colores.

En principio lo estuve haciendo con el compañero Ismael pero a medias debido a su ausencia tuve que tomar el cargo completo del proyecto, sin embargo estoy agradecido con el con la ayuda que me dio.


![](https://github.com/Samael696/arduino/blob/main/IMG_20211109_135149.jpg?raw=true)


Por poco pude concluir el proyecto debido a una falla en el led, uno de los colores no se dejaba notar (NO APARECIA) cabe decir que con ayuda del profesor hice muchos cambios que creiamos y eran necesarios para que el proyecto pueda funcionar como debe, cambiamos una resistencia, cambiamos unos cables de lado, y por un momento creí que el culpable de todo era el potenciometro pero con ayuda del monitor de arduino me di cuenta que estaba equivocado.
todo concluyó en un exito a medias ya que la luz roja nunca apareció.

Tras varios intentos fallidos pensé que si ya habia probado de todo tal vez el responsable de todos los fallos no era otro más que el led.

Y así fue, la culpa no era mía, era del led que tenía una parte mala, cambié de led y pudo funcionar al fin. 







