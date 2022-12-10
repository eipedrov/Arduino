void setup()
{
  pinMode(4, OUTPUT);// LED VERDE
  pinMode(5, OUTPUT);// LED AMARELO
  pinMode(6, OUTPUT);// LED VERMELO
  pinMode(9, OUTPUT);// LED VERDE
  pinMode(10, OUTPUT);// LED AMARELO
  pinMode(11, OUTPUT);// LED VERMELHO
}

void loop()
{
  digitalWrite(11, HIGH);//LIGA O LED VERMELHO
  digitalWrite(4, HIGH);//LIGA O LED VERDE
  delay(1000);
  digitalWrite(11, LOW);//APAGA O LED VERMELHO
  digitalWrite(4, LOW);//APAGA O LED VERDE
  delay(1000);
  digitalWrite(5, HIGH);//LIGA O LED AMARELO
  digitalWrite(10, HIGH);//LIGA O LED AMARELO
  delay(1000);
  digitalWrite(5, LOW);//LIGA O LED AMARELO
  digitalWrite(10, LOW);//LIGA O LED AMARELO
  delay(1000);
  digitalWrite(9, HIGH);//LIGA O LED VERDE
  digitalWrite(6, HIGH);//LIGA O LED VERMELHO
  delay(1000);
  digitalWrite(9, LOW);//APAGA O LED VERMELHO
  digitalWrite(6, LOW);//APAGA O LED VERDE
  delay(1000);
  digitalWrite(5, HIGH);//LIGA O LED AMARELO
  digitalWrite(10, HIGH);//LIGA O LED AMARELO
  delay(1000);
  digitalWrite(5, LOW);//APAGA O LED VERDE
  digitalWrite(10, LOW);//APAGA O LED VERDE
  delay(1000);
}
