#include "DHT.h"      

const int sensor_pin_ky015 = 3; 
DHT dht11(sensor_pin_ky015, DHT11); 

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
  dht11.begin ();   
}

void loop() {
   delay(2000);                              //esperamos 2 segundos antes de empezar

  //Leemos el sensor y almacenamos los valores
  float humedad_ky015 = dht11.readHumidity();             //leemos la humedad y almacenamos
  float temperatura_ky015 = dht11.readTemperature(); 

  if (isnan(humedad_ky015) || isnan(temperatura_ky015)) {
    //Si la lectura es incorrecta
    Serial.println ("Error de lectura en KY-015");    //mostramos el mensaje de error en el serial
  }
    else {
    //Si la lectura es correcta


    Serial.print("KY-015: ");               //mandamos texto al visor serie
    Serial.print("Humedad = ");             //mandamos texto al visor serie
    Serial.print(humedad_ky015,1);          //mandamos el valor medido de humedad con 1 decimal
    Serial.print(" %\t");                   //mandamos el simbolo % y un tabulador
    Serial.print("Temperatura = ");         //mandamos texto al visor serie
    Serial.print(temperatura_ky015,1);      //mandamos el valor medido de temperatura con 1 decimal
    Serial.print("ºC");                     //mandamos texto al visor serie
  }
}

