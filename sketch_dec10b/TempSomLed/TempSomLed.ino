int buzz = 8;
int ledverm = 9;


#include <Thermistor.h>

Thermistor temp(0);

void setup()
{
  Serial.begin(9600);
  pinMode(ledverm, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  int temperature = temp.getTemp();
  Serial.print("A temperatura do sensor é: ");
  Serial.print(temperature);
  Serial.println("*C");
  delay(1000);

  if (temperature > 26)
  {
    digitalWrite(ledverm, HIGH);
    delay(50);
    digitalWrite(ledverm, LOW);
    delay(50);
    
    digitalWrite(buzz, HIGH);
  }
  else
  {
    digitalWrite(ledverm, LOW);
    digitalWrite(buzz, LOW);
  }

}
