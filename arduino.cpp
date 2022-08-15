int led_vermelho = 10;
int led_amarelo = 11;
int led_verde = 12;

int led_pedestre_vermelho = 8;
int led_pedestre_verde = 9;

int led_vermelho_perpendicular = 7;
int led_amarelo_perpendicular = 6;
int led_verde_perpendicular = 5;

int led_pedestre_perpendicular_vermelho = 4;
int led_pedestre_perpendicular_verde = 3;

void setup()
{
  //Semaforo avenida
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  
  //Semaforo Pedestre
  pinMode(led_pedestre_vermelho, OUTPUT);
  pinMode(led_pedestre_verde, OUTPUT);
  
  //Semaforo Cruzamento
  pinMode(led_vermelho_perpendicular, OUTPUT);
  pinMode(led_amarelo_perpendicular, OUTPUT);
  pinMode(led_verde_perpendicular, OUTPUT);
  
  //Semaforo Pedestre Cruzamento
  pinMode(led_pedestre_perpendicular_vermelho, OUTPUT);
  pinMode(led_pedestre_perpendicular_verde, OUTPUT);
  
}

void loop()
{
  
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  digitalWrite(led_pedestre_vermelho, LOW);
  digitalWrite(led_pedestre_verde, HIGH);
  
  digitalWrite(led_vermelho_perpendicular, LOW);
  digitalWrite(led_amarelo_perpendicular, LOW);
  digitalWrite(led_verde_perpendicular, HIGH);
  digitalWrite(led_pedestre_perpendicular_vermelho, HIGH);
  digitalWrite(led_pedestre_perpendicular_verde, LOW);
  delay(4000);
  
  digitalWrite(led_vermelho_perpendicular, LOW);
  digitalWrite(led_amarelo_perpendicular, HIGH);
  digitalWrite(led_verde_perpendicular, LOW);
  delay(2000);
  
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  digitalWrite(led_pedestre_vermelho, HIGH);
  digitalWrite(led_pedestre_verde, LOW);
  
  digitalWrite(led_vermelho_perpendicular, HIGH);
  digitalWrite(led_amarelo_perpendicular, LOW);
  digitalWrite(led_verde_perpendicular, LOW);
  digitalWrite(led_pedestre_perpendicular_vermelho, LOW);
  digitalWrite(led_pedestre_perpendicular_verde, HIGH);
  delay(4000);
  
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(2000);
 
  
}