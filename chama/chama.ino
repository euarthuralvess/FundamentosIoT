const int PINO_D0 = 9;
const int PINO_A0 = A1;
const int LED_VERDE=11;
const int LED_VERMELHO=12;
 
void setup()
{
  Serial.begin(9600);
  pinMode(PINO_A0, INPUT);
  pinMode(PINO_D0, INPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_VERMELHO,OUTPUT);
}
 
void loop()
{
  int valorAferido = analogRead(PINO_A0);
  int valorSensor= digitalRead(PINO_D0);
 
  Serial.print("Porta analogica: ");
  Serial.print(valorAferido);

 
  if (valorSensor != HIGH)
  {
    Serial.println("Fogo detectado !!!");
    digitalWrite(LED_VERMELHO,HIGH);
    digitalWrite(LED_VERDE,LOW);
  }else{
    Serial.println("Sem fogo");
    digitalWrite(LED_VERMELHO,LOW);
    digitalWrite(LED_VERDE,HIGH);
  }
  delay(500);
}
