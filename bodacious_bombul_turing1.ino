
 int green = 9;
int yellow = 10;
int red = 11;
int ON = 1000;
int OFF = 1000;
void setup()
{
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  
}
void loop()
{ // turnning the red on 
  digitalWrite(red,HIGH);
  delay(ON);
  
  // the yellow led flash three times while the red is still on 
  for(int i =0;i<3;i++)
  {
  digitalWrite(yellow,HIGH);
  delay(ON);
    digitalWrite(yellow,LOW);
  delay(OFF);
  }
  // turnning off the red and yellow simultaneously
    digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  
  // turnning on the green while both red and yellow are off
    digitalWrite(green,HIGH);
  delay(ON);
  digitalWrite(green,LOW);
  delay(OFF);
  
  
}