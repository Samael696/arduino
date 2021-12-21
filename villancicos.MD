```
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 450;

 
void setup() {
  
  
   pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
   tocarMelodia();
  }

}

void tocarMelodia(){
  tocarNota(1,0.5);
  tocarNota(2,1);
  tocarNota(-1,0.5);
  tocarNota(1,0.5);
  tocarNota(1,1);
  tocarNota(6,0.5);
  tocarNota(4,0.5);
  tocarNota(2,0.5);
  tocarNota(-1,0.5);
  tocarNota(1,0.5);
  tocarNota(1,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(2,0.5);
  tocarNota(1,0.5);
  tocarNota(4,0.5);
  tocarNota(3,1);

  tocarNota(-1,2);
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

void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```
este es el villancico de rodolfo el reno el cual nos ha dado un poco de problemas con los silencios pero lo pudimos arreglar
