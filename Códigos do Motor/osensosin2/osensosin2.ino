int led = 10;
int saidaSensor = 7;
void setup() {
 pinMode(led, OUTPUT);
 pinMode(saidaSensor, INPUT);
 Serial.begin(9600);
}

void loop() {
  int leituraSensor = digitalRead(saidaSensor);
  if (leituraSensor == 0){
    Serial.println("Detectado");
    digitalWrite(led,HIGH);
  }
  else{
    Serial.println("Ausente");
    digitalWrite(led,LOW);
  }
  delay(1000);
}
