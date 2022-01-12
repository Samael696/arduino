Ç```
const int switchPin = 8;
unsigned long previousTime = 0; 
int switchState = 0;
int prevSwitchState = 0;


int led = 2;

long interval = 1000;

//Variables melodia
const int pinAltavoz = 9;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 650;


void setup() {
   for(int x = 2;x<8;x++){
     pinMode (x, OUTPUT);
  }

  pinMode(switchPin, INPUT);
}
void loop(){
  unsigned long currentTime = millis();
  if(currentTime - previousTime > interval) {
    previousTime = currentTime;

    digitalWrite(led, HIGH);
    led++;
    if (led==8){
  ejecutarSonido();
 }
  }

 switchState = digitalRead (switchPin);
if(switchState != prevSwitchState){
  for(int x = 2;x<8;x++){
    digitalWrite(x, LOW);
  }

  led = 2;
  previousTime = currentTime;
}

 prevSwitchState = switchState;

 

}
 
void ejecutarSonido(){

  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,1);
  
  tocarNota(-1,0.5);

  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(3,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(5,0.5);
  
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(5,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(6,0.5);
  tocarNota(5,0.5);
  tocarNota(6,1);

  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(2,0.5);
  tocarNota(3,1);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(5,0.5);
  tocarNota(4,1);
  tocarNota(3,0.5);
  tocarNota(2,0.5);
  tocarNota(3,1.5);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(2,0.5);
  tocarNota(3,1);
  tocarNota(6,0.5);
  tocarNota(1,0.5);
  tocarNota(4,0.5);
  tocarNota(5,1);
  tocarNota(6,0.5);
  tocarNota(3,0.5);
  tocarNota(4,0.5);
  tocarNota(3,0.5);

  tocarNota(1,1);
  tocarNota(2,1);
  tocarNota(3,1);
  tocarNota(2,1);
  tocarNota(1,1);
  tocarNota(1,1);
  tocarNota(2,1);
  tocarNota(3,1.5);
  tocarNota(6,1);
  tocarNota(6,1);
  tocarNota(0,1);
  tocarNota(1,1);
  tocarNota(2,1);
  tocarNota(1,1);
  tocarNota(0,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(3,1);
  tocarNota(3,1.5);
  tocarNota(1,1);
  tocarNota(2,1);
  tocarNota(3,1);
  tocarNota(2,1);
  tocarNota(1,1);
  tocarNota(0,1);
  tocarNota(1,1);
  tocarNota(2,1);
  tocarNota(3,1.5);
  tocarNota(6,1.5);
  tocarNota(6,1);
  tocarNota(0,1);
  tocarNota(1,1);
  tocarNota(4,1);
  tocarNota(3,1);
  tocarNota(3,1);
  tocarNota(1,1);
  tocarNota(5,1);
  


  
  tocarNota(-1,4);
}

void tocarNota(int numeroNota, float duracionNota){
  int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra * duracionNota;
  
  if (numeroNota == -1){
    noTone(pin);
    delay(duracionMilisegundos);
    
  }
  else { 
   
  int frecuencia = freqs[numeroNota];
  tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos);
  }
}


Ç```
