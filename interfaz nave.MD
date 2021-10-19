int switchState = 0;

void setup() {

pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,INPUT);

}

void loop(){

switchState = digitalRead(2);
// esto es un comentario

if (switchState == HIGH) {
// el boton no esta pulsado

digitalWrite(3, HIGH); // LED verde
digitalWrite(4, LOW); // LED rojos
digitalWrite(5, LOW); // LED rojos

}

else { // the button is pressed
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);

delay(250); // espera un cuarto de segundo
// permuta les LEDs
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
delay(250); // espera un cuarto de segundo

}

} // vuelve al inicio del bucle


## procedimiento 


