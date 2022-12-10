
char letra;
const int ledRed = 3;
const int ledGreen = 4;
const int ledYelow = 5;

void setup() 
{
  Serial.begin (9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYelow, OUTPUT);  

}

void loop() 
{
  letra = Serial.read();
  if (letra == 'r')
    {
      Serial.println("Voce ligou o led vermelho");
      digitalWrite(ledRed, HIGH);
      delay(1000);
      digitalWrite(ledRed, LOW);
      
    }
  if (letra == 'g')
    {
      Serial.println("Voce ligou o led verde");
      digitalWrite(ledGreen, HIGH);
      delay(1000);      
      digitalWrite(ledGreen, LOW);
           
    }
  if (letra == 'y')
  {
    Serial.println("Voce ligou o led amarelo");
    digitalWrite(ledYelow, HIGH);
    delay(1000);
    digitalWrite(ledYelow, LOW);
    
  }
  }
