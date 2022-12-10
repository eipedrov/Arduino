//notas
#define  C0 16.35
#define Db0 17.32
#define D0  18.35
#define Eb0 19.45
#define E0  20.60
#define F0  21.83
#define Gb0 23.12
#define G0  24.50
#define Ab0 25.96
#define LA0 27.50
#define Bb0 29.14
#define B0  30.87
#define C1  32.70
#define Db1 34.65
#define D1  36.71
#define Eb1 38.89
#define E1  41.20
#define F1  43.65
#define Gb1 46.25
#define G1  49.00
#define Ab1 51.91
#define LA1 55.00
#define Bb1 58.27
#define B1  61.74
#define C2  65.41
#define Db2 69.30
#define D2  73.42
#define Eb2 77.78
#define E2  82.41
#define F2  87.31
#define Gb2 92.50
#define G2  98.00
#define Ab2 103.83
#define LA2 110.00
#define Bb2 116.54
#define B2  123.47
#define C3  130.81
#define Db3 138.59
#define D3  146.83
#define Eb3 155.56
#define E3  164.81
#define F3  174.61
#define Gb3 185.00
#define G3  196.00
#define Ab3 207.65
#define LA3 220.00
#define Bb3 233.08
#define B3  246.94
#define C4  261.63
#define Db4 277.18
#define D4  293.66
#define Eb4 311.13
#define E4  329.63
#define F4  349.23
#define Gb4 369.99
#define G4  392.00
#define Ab4 415.30
#define LA4 440.00
#define Bb4 466.16
#define B4  493.88
#define C5  523.25
#define Db5 554.37
#define D5  587.33
#define Eb5 622.25
#define E5  659.26
#define F5  698.46
#define Gb5 739.99
#define G5  783.99
#define Ab5 830.61
#define LA5 880.00
#define Bb5 932.33
#define B5  987.77
#define C6  1046.50
#define Db6 1108.73
#define D6  1174.66
#define Eb6 1244.51
#define E6  1318.51
#define F6  1396.91
#define Gb6 1479.98
#define G6  1567.98
#define Ab6 1661.22
#define LA6 1760.00
#define Bb6 1864.66
#define B6  1975.53
#define C7  2093.00
#define Db7 2217.46
#define D7  2349.32
#define Eb7 2489.02
#define E7  2637.02
#define F7  2793.83
#define Gb7 2959.96
#define G7  3135.96
#define Ab7 3322.44
#define LA7 3520.01
#define Bb7 3729.31
#define B7  3951.07
#define C8  4186.01
#define Db8 4434.92
#define D8  4698.64
#define Eb8 4978.03
/*
    Duracao das notas
*/
#define BPM 120    //  you can change this value changing all the others
#define H 2*Q //half 2/4
#define Q 60000/BPM //quarter 1/4 
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4

int portSpeak(5);  //porta ligada no speaker

//melodia do MARIO THEME
int melodia[] = {660, 660, 660, 510, 660, 770, 380, 510, 380, 320, 440, 480, 450, 430, 380, 660, 760, 860, 700, 760, 660, 520, 580, 480, 510, 380, 320, 440, 480, 450, 430, 380, 660, 760, 860, 700, 760, 660, 520, 580, 480, 500, 760, 720, 680, 620, 650, 380, 430, 500, 430, 500, 570, 500, 760, 720, 680, 620, 650, 1020, 1020, 1020, 380, 500, 760, 720, 680, 620, 650, 380, 430, 500, 430, 500, 570, 585, 550, 500, 380, 500, 500, 500, 500, 760, 720, 680, 620, 650, 380, 430, 500, 430, 500, 570, 500, 760, 720, 680, 620, 650, 1020, 1020, 1020, 380, 500, 760, 720, 680, 620, 650, 380, 430, 500, 430, 500, 570, 585, 550, 500, 380, 500, 500, 500, 500, 500, 500, 500, 580, 660, 500, 430, 380, 500, 500, 500, 500, 580, 660, 870, 760, 500, 500, 500, 500, 580, 660, 500, 430, 380, 660, 660, 660, 510, 660, 770, 380};

//duraçao de cada nota
int duracaodasnotas[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 80, 100, 100, 100, 80, 50, 100, 80, 50, 80, 80, 80, 80, 100, 100, 100, 100, 80, 100, 100, 100, 80, 50, 100, 80, 50, 80, 80, 80, 80, 100, 100, 100, 100, 150, 150, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 150, 200, 80, 80, 80, 100, 100, 100, 100, 100, 150, 150, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 150, 150, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 150, 200, 80, 80, 80, 100, 100, 100, 100, 100, 150, 150, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 60, 80, 60, 80, 80, 80, 80, 80, 80, 60, 80, 60, 80, 80, 80, 80, 80, 60, 80, 60, 80, 80, 80, 80, 80, 80, 100, 100, 100, 100, 100, 100, 100};



const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int buzz = 5;
int estadobotao = 0;
const int led = 6;


void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(led, OUTPUT);

}


void loop()
{
  estadobotao = digitalRead(botao1);
  if (estadobotao == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(2000);
    tone(buzz, 262, 200); //DO
    delay(200);
    tone(buzz, 294, 300); //RE
    delay(200);
    tone(buzz, 330, 300); //MI
    delay(200);
    tone(buzz, 349, 300); //FA
    delay(300);
    tone(buzz, 349, 300); //FA
    delay(300);
    tone(buzz, 349, 300); //FA
    delay(300);
    tone(buzz, 262, 100); //DO
    delay(200);
    tone(buzz, 294, 300); //RE
    delay(200);
    tone(buzz, 262, 100); //DO
    delay(200);
    tone(buzz, 294, 300); //RE
    delay(300);
    tone(buzz, 294, 300); //RE
    delay(300);
    tone(buzz, 294, 300); //RE
    delay(300);
    tone(buzz, 262, 200); //DO
    delay(200);
    tone(buzz, 392, 200); //SOL
    delay(200);
    tone(buzz, 349, 200); //FA
    delay(200);
    tone(buzz, 330, 300); //MI
    delay(300);
    tone(buzz, 330, 300); //MI
    delay(300);
    tone(buzz, 330, 300); //MI
    delay(300);
    tone(buzz, 262, 200); //DO
    delay(200);
    tone(buzz, 294, 300); //RE
    delay(200);
    tone(buzz, 330, 300); //MI
    delay(200);
    tone(buzz, 349, 300); //FA
    delay(300);
    tone(buzz, 349, 300); //FA
    delay(300);
    tone(buzz, 349, 300); //FA
    delay(300);

  }
  else
  {
    digitalWrite(buzz, LOW);
    digitalWrite(led, LOW);
  }
  estadobotao = digitalRead(botao2);
  if (estadobotao == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(50);
    tone(buzz, LA3, Q);
    delay(1 + Q); //delay duration should always be 1 ms more than the note in order to separate them.
    tone(buzz, LA3, Q);
    delay(1 + Q);
    tone(buzz, LA3, Q);
    delay(1 + Q);
    tone(buzz, F3, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);

    tone(buzz, LA3, Q);
    delay(1 + Q);
    tone(buzz, F3, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);
    tone(buzz, LA3, H);
    delay(1 + H);

    tone(buzz, E4, Q);
    delay(1 + Q);
    tone(buzz, E4, Q);
    delay(1 + Q);
    tone(buzz, E4, Q);
    delay(1 + Q);
    tone(buzz, F4, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);

    tone(buzz, Ab3, Q);
    delay(1 + Q);
    tone(buzz, F3, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);
    tone(buzz, LA3, H);
    delay(1 + H);

    tone(buzz, LA4, Q);
    delay(1 + Q);
    tone(buzz, LA3, E + S);
    delay(1 + E + S);
    tone(buzz, LA3, S);
    delay(1 + S);
    tone(buzz, LA4, Q);
    delay(1 + Q);
    tone(buzz, Ab4, E + S);
    delay(1 + E + S);
    tone(buzz, G4, S);
    delay(1 + S);

    tone(buzz, Gb4, S);
    delay(1 + S);
    tone(buzz, E4, S);
    delay(1 + S);
    tone(buzz, F4, E);
    delay(1 + E);
    delay(1 + E); //PAUSE
    tone(buzz, Bb3, E);
    delay(1 + E);
    tone(buzz, Eb4, Q);
    delay(1 + Q);
    tone(buzz, D4, E + S);
    delay(1 + E + S);
    tone(buzz, Db4, S);
    delay(1 + S);

    tone(buzz, C4, S);
    delay(1 + S);
    tone(buzz, B3, S);
    delay(1 + S);
    tone(buzz, C4, E);
    delay(1 + E);
    delay(1 + E); //PAUSE QUASI FINE RIGA
    tone(buzz, F3, E);
    delay(1 + E);
    tone(buzz, Ab3, Q);
    delay(1 + Q);
    tone(buzz, F3, E + S);
    delay(1 + E + S);
    tone(buzz, LA3, S);
    delay(1 + S);

    tone(buzz, C4, Q);
    delay(1 + Q);
    tone(buzz, LA3, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);
    tone(buzz, E4, H);
    delay(1 + H);

    tone(buzz, LA4, Q);
    delay(1 + Q);
    tone(buzz, LA3, E + S);
    delay(1 + E + S);
    tone(buzz, LA3, S);
    delay(1 + S);
    tone(buzz, LA4, Q);
    delay(1 + Q);
    tone(buzz, Ab4, E + S);
    delay(1 + E + S);
    tone(buzz, G4, S);
    delay(1 + S);

    tone(buzz, Gb4, S);
    delay(1 + S);
    tone(buzz, E4, S);
    delay(1 + S);
    tone(buzz, F4, E);
    delay(1 + E);
    delay(1 + E); //PAUSE
    tone(buzz, Bb3, E);
    delay(1 + E);
    tone(buzz, Eb4, Q);
    delay(1 + Q);
    tone(buzz, D4, E + S);
    delay(1 + E + S);
    tone(buzz, Db4, S);
    delay(1 + S);

    tone(buzz, C4, S);
    delay(1 + S);
    tone(buzz, B3, S);
    delay(1 + S);
    tone(buzz, C4, E);
    delay(1 + E);
    delay(1 + E); //PAUSE QUASI FINE RIGA
    tone(buzz, F3, E);
    delay(1 + E);
    tone(buzz, Ab3, Q);
    delay(1 + Q);
    tone(buzz, F3, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);

    tone(buzz, LA3, Q);
    delay(1 + Q);
    tone(buzz, F3, E + S);
    delay(1 + E + S);
    tone(buzz, C4, S);
    delay(1 + S);
    tone(buzz, LA3, H);
    delay(1 + H);

    delay(2 * H);
  }
  else
  {
    digitalWrite(buzz, LOW);
    digitalWrite(led, LOW);
  }

  estadobotao = digitalRead(botao3);
  if (estadobotao == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(50);
    //for para tocar as 156 notas começando no 0 ate 156 ++ incrementado
    for (int nota = 0; nota < 156; nota++) {

      int duracaodanota = duracaodasnotas[nota];
      tone(portSpeak, melodia[nota], duracaodanota);
      //pausa depois das notas
      int pausadepoisdasnotas[] = {150, 300, 300, 100, 300, 550, 575, 450, 400, 500, 300, 330, 150, 300, 200, 200, 150, 300, 150, 350, 300, 150, 150, 500, 450, 400, 500, 300, 330, 150, 300, 200, 200, 150, 300, 150, 350, 300, 150, 150, 500, 300, 100, 150, 150, 300, 300, 150, 150, 300, 150, 100, 220, 300, 100, 150, 150, 300, 300, 300, 150, 300, 300, 300, 100, 150, 150, 300, 300, 150, 150, 300, 150, 100, 420, 450, 420, 360, 300, 300, 150, 300, 300, 100, 150, 150, 300, 300, 150, 150, 300, 150, 100, 220, 300, 100, 150, 150, 300, 300, 300, 150, 300, 300, 300, 100, 150, 150, 300, 300, 150, 150, 300, 150, 100, 420, 450, 420, 360, 300, 300, 150, 300, 150, 300, 350, 150, 350, 150, 300, 150, 600, 150, 300, 350, 150, 150, 550, 325, 600, 150, 300, 350, 150, 350, 150, 300, 150, 600, 150, 300, 300, 100, 300, 550, 575};
      delay(pausadepoisdasnotas[nota]);
    }

    noTone(portSpeak);
  }

else
{
  digitalWrite(buzz, LOW);
  digitalWrite(led, LOW);
}



}
