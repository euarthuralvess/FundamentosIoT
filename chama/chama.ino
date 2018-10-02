const int PINO_D0 = 9;
const int PINO_A0 = A1;
const int LED_GREEN=11;
const int LED_RED=12;
 
void setup()
{
  Serial.begin(9600);
  pinMode(PINO_A0, INPUT);
  pinMode(PINO_D0, INPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED,OUTPUT);
}
 
void loop()
{
  int valorAferido = analogRead(PINO_A0);
  int valorSensor= digitalRead(PINO_D0);
 
  Serial.print("Analogic Input: ");
  Serial.print(valorAferido);

 
  if (valorSensor != HIGH)
  {
    Serial.println("ITS ON FIRE !!!");
    digitalWrite(LED_RED,HIGH);
    digitalWrite(LED_GREEN,LOW);
  }else{
    Serial.println("Chill AF");
    digitalWrite(LED_RED,LOW);
    digitalWrite(LED_GREEN,HIGH);
  }
  delay(500);
}
