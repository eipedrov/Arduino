//Programa : Contador crescente 0 a F
  byte seven_seg_digits[16][7] = {{1,1,1,1,1,1,0}, //= Digito 0
                                  {0,1,1,0,0,0,0}, //= Digito 1
                                  {1,1,0,1,1,0,1}, //= Digito 2
                                  {1,1,1,1,0,0,1}, //= Digito 3
                                  {0,1,1,0,0,1,1}, //= Digito 4
                                  {1,0,1,1,0,1,1}, //= Digito 5
                                  {1,0,1,1,1,1,1}, //= Digito 6
                                  {1,1,1,0,0,0,0}, //= Digito 7
                                  {1,1,1,1,1,1,1}, //= Digito 8
                                  {1,1,1,0,0,1,1}, //= Digito 9
                                  {1,1,1,0,1,1,1}, //= Digito A
                                  {0,0,1,1,1,1,1}, //= Digito B
                                  {1,0,0,1,1,1,0}, //= Digito C
                                  {0,1,1,1,1,0,1}, //= Digito D
                                  {1,0,0,1,1,1,1}, //= Digito E
                                  {1,0,0,0,1,1,1}, //= Digito F
                                 };

void setup()  {
  pinMode(2, OUTPUT); //Pino 2 do Arduino ligado ao segmento A
  pinMode(3, OUTPUT); //Pino 3 do Arduino ligado ao segmento B
  pinMode(4, OUTPUT); //Pino 4 do Arduino ligado ao segmento C
  pinMode(5, OUTPUT); //Pino 5 do Arduino ligado ao segmento D
  pinMode(6, OUTPUT); //Pino 6 do Arduino ligado ao segmento E
  pinMode(7, OUTPUT); //Pino 7 do Arduino ligado ao segmento F
  pinMode(8, OUTPUT); //Pino 8 do Arduino ligado ao segmento G
  pinMode(9, OUTPUT); //Pino 9 do Arduino ligado ao segmento PONTO
  writePonto(0);  //Inicia com o ponto desligado
  
}

void writePonto(byte dot) //Função que aciona o ponto no display
{
  digitalWrite(9,dot);
}
void sevenSegWrite (byte digit) //Função que aciona o display
{
  byte pin = 2;

  //Percorre a Array ligando os segmentos correspondentes ao digito
  for (byte segCount = 0; segCount < 7; ++segCount)
  {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
    writePonto(1);  //Liga o ponto
    delay(100); //Aguarda 100 milisegundos
    writePonto(0);  //Desliga o ponto
}   

void loop() {
  for (byte count = 0; count <16; count++)
  {
      delay(500);
      sevenSegWrite(count);
  }
  delay(4000);
}
