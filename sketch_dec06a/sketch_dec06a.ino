
int Pino4 = 4;
int EstPin4 = HIGH;
int Pino5 = 5;
int EstPin5 = HIGH;
int Pino6 = 6;
int EstPin6 = HIGH;
int Pino9 = 9;
int EstPin9 = LOW;
int Pino10 = 10;
int EstPin10 = LOW;
int Pino11 = 11;
int EstPin11 = LOW;

void setup() 
{
  Serial.begin(9600); 
  pinMode(Pino4, OUTPUT);
  pinMode(Pino5, OUTPUT);
  pinMode(Pino6, OUTPUT);
  pinMode(Pino9, OUTPUT);
  pinMode(Pino10, OUTPUT);
  pinMode(Pino11, OUTPUT);
}

void loop() 
{
  EstPin4 = digitalRead(Pino4);
  


}
