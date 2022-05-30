// Exemplo 4 - Sensor de luz LDR
// Apostila Eletrogate - KIT ROBÓTICA
#define AnalogLDR A0 // define pino analógico A0
#define Limiar 2 // define constante igual a 1.5
#define ledPin 13 // define pino digital D13
int Leitura = 0; // variavel inteiro igual a zero
float VoltageLDR; // variavel numero fracionario
float ResLDR; // variavel numero fracionario
void setup()
{
  pinMode(ledPin, OUTPUT); // configura D13 como saída digital
  Serial.begin(9600); // monitor serial - velocidade 9600 Bps
  delay(100); // atraso de 100 milisegundos
}
void loop()
{
  Leitura = analogRead(AnalogLDR); // leitura da tensão no pino analogico A0
  VoltageLDR = Leitura * (5.0 / 1024); // calculo da tensão no LDR
  Serial.print("Leitura sensor LDR = "); // imprime no monitor serial
  Serial.println(VoltageLDR); // imprime a tensão do LDR
  if (VoltageLDR > Limiar) // se a tensão LDR maior do que limiar
    digitalWrite(ledPin, HIGH); // liga LED com 5V
  else // senão a tensão LDR < limiar
    digitalWrite(ledPin, LOW); // desliga LED com 0V
  delay(500); // atraso de 500 milisegundos
}
