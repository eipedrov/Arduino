const int ldrport = A0;
int LDR =0;

void setup() 
{
 Serial.begin (9600); 

}

void loop() 
{
 LDR = analogRead(ldrport);
 Serial.println(LDR);

}
