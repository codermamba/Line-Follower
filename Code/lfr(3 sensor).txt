// The following code is for arduino uno
int led = 13;
int left=A1,  centr=A2,  rit=A3; 
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(left,INPUT);
  pinMode(centr,INPUT);
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
void bw()
{
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
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
  int c=digitalRead(centr);
  int r=digitalRead(rit);
  if((l==LOW) && (c==LOW) && (r==LOW) )
  {
   st();  
  }
  if((l==LOW) && (c==LOW) && (r==HIGH) )
  {
   lt();  
  }
  if((l==LOW) && (c==HIGH) && (r==LOW) )
  {
   bw();  
  }
  if((l==LOW) && (c==HIGH) && (r==HIGH) )
  {
   lt();  
  }
  if((l==HIGH) && (c==LOW) && (r==LOW) )
  {
   rt();  
  }
  if((l==HIGH) && (c==LOW) && (r==HIGH) )
  {
   fw();  
  }
  if((l==HIGH) && (c==HIGH) && (r==LOW) )
  {
   rt();  
  }
  if((l==HIGH) && (c==HIGH) && (r==HIGH) )
  {
   bw();  
  }
}
  
