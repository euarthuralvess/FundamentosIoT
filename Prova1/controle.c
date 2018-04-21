Código de Controle do Arduino

#include <HCSR04.h>
const int PIN_TRIGGER=7;
const int PIN_ECHO=6;
const int LED_VERMELHO=11;
const int LED_VERDE=12;
UltraSonicDistanceSensor sensor(PIN_TRIGGER,PIN_ECHO);
void setup() {
  pinMode(LED_VERMELHO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);
  Serial.begin(9600);
}
void apagarLeds(){
  digitalWrite(LED_VERMELHO,LOW);
  digitalWrite(LED_VERDE,LOW);
}
void loop() {
  double distancia=sensor.measureDistanceCm();
  apagarLeds();
  Serial.println();
  if (distancia!=-1.0){
    if (distancia<10.0){
    Serial.write("PERIGO IMINENTE!");
    for(int i=0;i<=6;i++){
      digitalWrite(LED_VERMELHO,HIGH);
      delay(30);
      digitalWrite(LED_VERMELHO,LOW);
}

}else if(distancia<25.0){
  Serial.write("PERIGO!");
  for(int i=0;i<=6;i++){
    digitalWrite(LED_VERMELHO,HIGH);
    delay(80);
    digitalWrite(LED_VERMELHO,LOW);
}

}else if(distancia<40.0){
  Serial.write("ATENÇÂO!");
  for(int i=0;i<=6;i++){
    digitalWrite(LED_VERMELHO,HIGH);
    delay(120);
    digitalWrite(LED_VERMELHO,LOW);
}

}else{
  Serial.write("TUDO LIMPO!");
  for(int i=0;i<=6;i++){
    digitalWrite(LED_VERDE,HIGH);
    delay(200);
