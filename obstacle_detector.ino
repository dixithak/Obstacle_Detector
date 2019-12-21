int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;
void setup()
{ pinMode(trigPin, OUTPUT); //SETTING PINS 
pinMode(echoPin, INPUT); //SETTING PINS
pinMode(buzzPin, OUTPUT); //SETTING BUZZER 1 
}
void loop()
{
  int t, d; //Ultrasonic sensor starts working
  digitalWrite(trigPin, HIGH); 
  delay(1); 
  digitalWrite(trigPin, LOW); 
  //Time taken to get reflected from the obstacle
  t = pulseIn(echoPin, HIGH);
  //distance between the sensor and obstacle is calculated using reflection time 
  d = (t/2) / 29.1;
  //Buzzer beeps based on the distance 
  if (d <= 50 && d >= 0) 
  {
    digitalWrite(buzzPin, HIGH);
    delay(20); 
    digitalWrite(buzzPin,LOW);
  }

  else if(d>50 && d <=100 )
  { 
    digitalWrite(buzzPin, HIGH); 
    delay(70);
    digitalWrite(buzzPin,LOW); 
  }
  
  else if(d>100 && d<150)
  {
    digitalWrite(buzzPin, HIGH); 
    delay(120);
    digitalWrite(buzzPin,LOW); 
  }
  
  else
  {
    digitalWrite(buzzPin,LOW);
  }
  
  delay(120);
}
