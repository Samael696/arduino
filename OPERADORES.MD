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


![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-11-03%2013-07-26.png?raw=true)

