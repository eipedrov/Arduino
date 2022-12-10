void setup() 
{
  pinMode(13, OUTPUT); //Seleciona a porta 13 como saida
 
}

void loop() 
{
  digitalWrite(13, HIGH);//manda a tensão para a porta 
  delay(50);//define o tempo que ela vai ficar acessa
  digitalWrite(13, LOW);//tira a tensão da porta
  delay(50);//define o tempo que ela vai ficar apagada

}
