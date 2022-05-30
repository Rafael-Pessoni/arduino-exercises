// Exemplo 3 - Entradas e saídas digitais - push-button + led
// Apostila Eletrogate - KIT ROBÓTICA
#define PinButton 8 // define pino digital D8
#define ledPin 7 // define pino digital D7
void setup()
{
  pinMode(PinButton, INPUT); // configura D8 como entrada digital
  pinMode(ledPin, OUTPUT); // configura D7 como saída digital
  Serial.begin(9600); // monitor serial - velocidade 9600 Bps
  delay(100); // atraso de 100 milisegundos
}
void loop()
{
  if ( digitalRead(PinButton) == HIGH) // se chave = nivel alto
  {
    digitalWrite(ledPin, HIGH); // liga LED com 5V
    Serial.println("Acendendo Led"); // imprime no monitor serial
  }
  else // senão chave = nivel baixo
  {
    digitalWrite(ledPin, LOW); // desliga LED com 0V
    Serial.println("Desligando led"); // imprime no monitor serial
  }
  delay(100); // atraso de 100 milisegundos
}
