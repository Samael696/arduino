Crearemos un theremin con ayuda de un fototransistor.
(Un fototransistor es un transistor sensible a la luz, normalmente a los infrarrojos. La luz incide sobre la región de base, generando portadores en ella. Esta carga de base lleva el transistor al estado de conducción.
Como fototransistor, cuando la luz que incide en este elemento hace las veces de corriente de base.)

El sonido sse crea a base de las vibraciones en el aire, todos los altavoces, auriculares etc generan sonido por lo mismo, algunos gracias tambíen a un electro imán.
(Un electroimán es un tipo de imán en el que el campo magnético es producido por el flujo de una corriente eléctrica. ... Entre ellos destacamos los de corriente circular, de corriente continua, rectangulares y los de accionamiento.)

Un theremin es un instrumento que produce sonido en base a los movimientos de las manos del músico alrededor del instrumento.
Probablemente  hayas escuchado alguno en peliculas de terror. 
El theremin detecta dónde están las manos del músico en relación a dos antenas, leyendo la transformación capasitiva en las antenas.
Estas antenas están conectadas a un circuito analógico que crea el sonido. Una antena controla la frecuencia del sonido, y la otra controla el volume

```C++
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int LedPin = 13;

void setup() {

pinMode(LedPin, OUTPUT);
digitalWrite(LedPin, HIGH);

while (millis () < 5000) {

sensorValue = analogRead(A0);
if (sensorValue > sensorHigh) {
sensorHigh = sensorValue;
}
if (sensorValue > sensorLow) {
sensorLow = sensorValue;
 }
}
digitalWrite(LedPin, LOW);
}
void loop() {
sensorValue = analogRead(A0);

int pitch =
  map(sensorValue,sensorLow,sensorHigh, 50 , 4000);
  
  tone(8,pitch,20);
  
  delay(10);
  }
```
