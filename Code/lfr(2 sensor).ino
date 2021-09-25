// The following code is for arduino uno
int left=A1, rit=A3; 
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(left,INPUT);
  pinMode(rit,INPUT); 
}

void fw()
{
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(100); 
}
void lt()
{
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(100); 
}
void rt()
{
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(100); 
}
void st()
{
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(100); 
}

void loop()
{
  int l=digitalRead(left);
  int r=digitalRead(rit);
  if((l==HIGH)  && (r==LOW) )
  {
  rt();  
  }
  if((l==LOW) && (r==HIGH) )
  {
   lt();  
  }
  if((l==LOW) && (r==LOW) )
  {
   fw();  
  }
  if((l==HIGH)&& (r==HIGH) )
  {
   st();  
  }
}
  
