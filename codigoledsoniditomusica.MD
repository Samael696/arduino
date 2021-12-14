ç´´´
int notes[] = {262,294,330,349};

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void loop() {
  int keyVal = analogRead(A1);
  Serial.println(keyVal);
  if(keyVal >= 1020){
    tone(8, notes[0]);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
  }
else if(keyVal >= 990 && keyVal <= 1010){
  tone(8, notes[1]);
      digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
}
else if(keyVal >=505&& keyVal <= 515){
  tone(8, notes[2]);
      digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
}
else if(keyVal >= 5 && keyVal <= 10){
  tone(8, notes[3]);
      digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
}

else{
  noTone(8);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
  }
}

ç´´´
