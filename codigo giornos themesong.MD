```C++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 650;

 
void setup() {
  
  
   pinMode(buttonPin, INPUT);
   tocarMelodia();
}


void loop(){
    checkButton();
 if (play) {
   
  }

}

void tocarMelodia(){
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
  
