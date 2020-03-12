const int rF= 6;
const int rB = 9;
const int lB= 5;
const int lF = 3;
const int trig=8;
const int echo=10;
long dur;
long distance;
long mindist=10;
long rotmin=200;
long rotmax=1000;
int bulltime=1500;
int fast=255;
int slow=70;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(lF , OUTPUT);
  pinMode(lB , OUTPUT);
  pinMode(rF , OUTPUT);
  pinMode(rB , OUTPUT);
  analogWrite(lF, 0);
  analogWrite(lB , 0);
  analogWrite(rF , 0);
  analogWrite(rB , 0);
int min=20;
int max=140;
int timeR=random(min, max);
}
void loop()
{
if (range()<40)
{
  // Forward
  analogWrite(lF, fast);
  analogWrite(lB , 0);
  analogWrite(rF , fast);
  analogWrite(rB , 0);
  delay(bulltime);
  //rotate
}
  //forward
  analogWrite(lF, slow);
  analogWrite(lB , 0);
  analogWrite(rF , 0);
  analogWrite(rB , slow);
}
int range()
{
   //Range Finder
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  dur= pulseIn(echo, HIGH);
  distance=dur*0.034/2;
  return distance;
  }
