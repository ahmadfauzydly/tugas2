void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(A0) == HIGH)
{ 
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
}

if( digitalRead(A1)== HIGH)
{
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
}

else PORTB=0x00;


}
