
int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;
void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzPin, OUTPUT);
Serial.begin(9600); 
}
void loop()
{
int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 21.8;
if (distance <= 200 && distance >= 0) {
digitalWrite(buzzPin, HIGH);
Serial.println("OBSTACLE HAS BEEN DETECTED");

}
else {
digitalWrite(buzzPin, LOW);
}
delay(60);
}
