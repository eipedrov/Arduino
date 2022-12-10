
#include <Thermistor.h>

Thermistor temp(0);

void setup()
{
  Serial.begin(9600);
 
}

void loop()
{
  int temperature = temp.getTemp();
  Serial.print("A temperatura do sensor é: ");
  Serial.print(temperature);
  Serial.println("*C");
  delay(1000);

}
