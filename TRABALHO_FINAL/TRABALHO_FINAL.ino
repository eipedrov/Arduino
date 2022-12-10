const int ldrport = A5;
const int led1 = 7;
const int led2 = 6;
const int buzz = 9;
int TEMP = 0;
int LDR = 0;


#include <LiquidCrystal.h> //inclusão da biblioteca do lcd
#include <Thermistor.h> //inclusão da biblioteca do termistor

Thermistor temp(4);

LiquidCrystal lcd (12, 11, 5, 4, 3, 2); //dizendo a função os pinos que vão ser ligados no lcd
byte grau[8] = { B00001100,
                 B00010010,
                 B00010010,
                 B00001100,
                 B00000000,
                 B00000000,
                 B00000000,
                 B00000000,
               };


void setup()
{
  Serial.begin (9600);
  lcd.begin(16, 2); // display de 16 colunas e 2 linhas
  lcd.createChar(0, grau);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzz, OUTPUT);

}

void loop()
{
  lcd.clear();
  
  lcd.setCursor(0, 0); //Move o cursor do display para a segunda linha (0 = I, 0 = J)
  int temperature = temp.getTemp();
  lcd.print("Temperatura:");
  lcd.print(temperature);
  lcd.write((byte)0);
  lcd.print("C");
  delay(1000);

  lcd.setCursor(0, 1); //Move o cursor do display para a segunda linha (0 = I, 1 = J)
  LDR = analogRead(ldrport);
  Serial.println(LDR);
  lcd.print("Luz: ");
  lcd.print(LDR);
  delay(1000);

  
  if (temperature > 25)
  {
    
    digitalWrite(buzz, HIGH);
    delay(50);
    digitalWrite(buzz, LOW);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);

  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(buzz, LOW);
    delay(1000);
  }

}
