
int sensorPIN = A0;
int ledR = 6;
int ledV = 7;
int bomb = 10;

void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(sensorPIN, INPUT);
  // pinMode(bomb, OUTPUT); 
  Serial.begin(9600);
  
  digitalWrite(ledR, HIGH);
}

void loop(){
 int almacenador = analogRead(sensorPIN);
 
  if(almacenador > -10){
	digitalWrite(ledR, LOW);
    digitalWrite(ledV, HIGH);
    //   digitalWrite(bomb, HIGH);
    
    delay(10000);
    
   	//   digitalWrite(bomb, LOW);
	digitalWrite(ledR, HIGH);
    digitalWrite(ledV, LOW);
  }
  
 Serial.print(almacenador);
 delay(1000);
}