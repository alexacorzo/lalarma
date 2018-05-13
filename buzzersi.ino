int analog = A8;
int digital = 17;
int buzzPin = 53;
float temp;
int tempPin = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (analog, INPUT);
  pinMode (digital, INPUT);
  pinMode (buzzPin, OUTPUT);
  digitalWrite (13, LOW);
  digitalWrite(buzzPin,HIGH);
  delay(1000);
    digitalWrite(buzzPin,HIGH);
  delay(1000);
  
}

void loop() {


//  digitalWrite(buzzPin, LOW);

  temp = analogRead(analog);
  Serial.println(temp);
  delay(1);
  temp = (temp * 5 / 1023) * 10;

  if (temp < 0.10) {
   digitalWrite(buzzPin,HIGH);
    Serial.println("asd");
  }

  else if (temp > 0.1
  0) {
    digitalWrite(buzzPin, LOW);

    Serial.println("asdddasd");
  }

  Serial.print("TEMPRATURE = ");
  Serial.print(temp);
  Serial.print(" Celcius");
  Serial.println();
  delay(1000);
}

void beep(unsigned char delayms) {
  digitalWrite(buzzPin,HIGH);
  delay(delayms);

}
