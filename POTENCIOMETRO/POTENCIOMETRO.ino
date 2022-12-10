int pot = 0; // variavel do potenciometro
const int potpin = A2; // variavel da porta de leitura do potenciometro
const int ledpwm = 9; // variavel da porta pwm 
void setup()
{
  
  pinMode(ledpwm, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  pot = analogRead(potpin)/4; // a variavel "pot" vai receber o valor que for lido na porta "potpin"
  analogWrite(ledpwm, pot); //usa a varival pot para alterar a intensidade do led  
  Serial.println(pot);


}
