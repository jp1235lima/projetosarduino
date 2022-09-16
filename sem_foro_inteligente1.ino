//declaração de variaveis 
byte ledA = 2;
byte ledB = 4;
byte ledC = 6;
int botao = 8;
int estado= 0;

//iniciação das variaveis
void setup(){
pinMode(ledA, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(ledC, OUTPUT); 
pinMode(botao, INPUT);
}

//instruções
void loop(){
estado = digitalRead(botao);
if(estado == 0){  
digitalWrite(ledA, 1); //1 para high, acender
delay(1000);
digitalWrite(ledA, 0); //0 para low, apagar
delay(1000);
digitalWrite(ledB, 1);
delay(1000);
digitalWrite(ledB, 0);
delay(1000);
digitalWrite(ledC, 1);
delay(1000);
digitalWrite(ledC, 0);
delay(1000);
  }

else{
digitalWrite(ledB, 0);
digitalWrite(ledC, 0);
digitalWrite(ledA, 1);
delay(2000);    
  }
}