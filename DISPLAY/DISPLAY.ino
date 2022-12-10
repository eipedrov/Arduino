

#include <LiquidCrystal.h> //inclusão da biblioteca do lcd

LiquidCrystal lcd (12, 11, 5, 4, 3, 2); //dizendo a função os pinos que vão ser ligados no lcd


void setup() 
{
  
  lcd.begin(16, 2); // display de 16 colunas e 2 linhas

}

void loop() 
{
  lcd.setCursor(3, 0); //Move o cursor do display para a segunda linha (0 = I, 1 = J)
  lcd.print("voces sao"); 
   lcd.setCursor(5, 1); //Move o cursor do display para a segunda linha (0 = I, 1 = J)
  lcd.print("heheh");
  
}
