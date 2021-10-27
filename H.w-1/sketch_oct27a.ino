void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(8,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

int value=digitalRead(0);


if(digitalRead(0)==HIGH)
{
  digitalWrite(13, HIGH);
}
else
{
  digitalWrite(12, LOW);
}
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
delay(3000);
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
delay(3000);

}
