const int botaopin = 3; // variavel da porta do botao
const int ledpin = 2; // variavel da porta do led
int estadobotao = 0; // o botao inicia como 0

void setup()
{
  pinMode(ledpin, OUTPUT); //o led vai ser a saida de luz
  pinMode(botaopin, INPUT); // o botao vai ser a entrada de info
}

void loop()
{
  estadobotao = digitalRead(botaopin); // a variavel vai receber o sinal da porta HIGH e LOW

  if(estadobotao == HIGH)
  {
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
}
