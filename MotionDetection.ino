// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  if(digitalRead(12))
  {
 //for controlling frequency of buzzer  
  tone(11,432);
 //or we can use
 //digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
    Serial.println("Object Founded");
}
  else
  {	noTone(11);
   //or we can use
   //digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
}