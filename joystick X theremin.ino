
int sensorValue;

const int ledPin = 8;

void setup(){

 
    
 Serial.begin(9600);

} //Fin de la funcion setup.

void loop() {

 

        sensorValue = analogRead(A0);
        Serial.println(sensorValue);

int pitch = map(sensorValue, 0, 1024, 50, 4000);

     tone(8,pitch,20);

         delay(10);

 

}
