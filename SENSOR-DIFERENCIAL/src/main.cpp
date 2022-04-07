#include <Arduino.h>

/* Air Pressure Measurement usning MPX5010 or MPX5100 Pressure Sensor*/
void setup()
{
// inicializamos comunicación con la PC a 9600 bits/seg:
Serial.begin(9600);
}
void loop()
{
// leemos el voltaje que sale por el pin 0:
float sensorValue = analogRead(A0);
// imprimimos el resultado:
Serial.print("Valor de salida: ");
Serial.print(sensorValue,2);
Serial.println(" V");
delay(1000); // retardo por característica dinámica del dispositivo
}