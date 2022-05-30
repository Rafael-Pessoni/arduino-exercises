#define sensorPin A0 // define entrada analógica A0
int sensorValue = 0; // variável inteiro igual a zero
float voltage; // variável numero fracionario

void setup()
{
  Serial.begin(9600); // monitor serial - velocidade 9600 Bps
  delay(100); // atraso de 100 milisegundos
}

void loop()
{
  sensorValue = analogRead(sensorPin); // leitura da entrada analógica A0
  voltage = sensorValue * (5.0 / 1024); // cálculo da tensão
  Serial.print("Tensão do potenciometro: "); // imprime no monitor serial
  Serial.print(voltage); // imprime a tensão
  Serial.print(" Valor: "); // imprime no monitor serial
  Serial.println(sensorValue); // imprime o valor
  delay(500); // atraso de 500 milisegundos
}
