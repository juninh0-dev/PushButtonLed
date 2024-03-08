// Declaração de constantes

const int led = 8; //led pino 8
const int botao = 7; //button pino 7
//Variável que conterá os estados do botão (o LOW, 1 HIGH)
int estadoBotao = 0;

void setup()
{
  pinMode(led, OUTPUT); //PINO 8 COMO SAÍDA
  pinMode(botao, INPUT); // Definido pino digital 7 como de entrada

}


void loop()
{
  // Lendo o estado do pino 7, contante botao e atribuindo
    // O resultado a variável estado Botao
    estadoBotao = digitalRead(botao);
  
  //Verificando o estado do botão para definir se acenderá ou
  //apagará o led
  if (estadoBotao == HIGH){
  digitalWrite(led,HIGH); //Botão pressionada, acende o led.    
  } else{
    digitalWrite(led,LOW); // Botão não pressionado, apaga o led
  }

}
