//VARIABLES
int AI=0;
int WHITE=11;
int MAX=700;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(WHITE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int readValue = analogRead(AI);
  if(readValue>MAX)
  {
    analogWrite(WHITE,100);
    delay(10000);
    analogWrite(WHITE,0);
  }
  //Lector
  Serial.print("Value is "); 
  Serial.println(readValue);
  delay(2000);
  
}
