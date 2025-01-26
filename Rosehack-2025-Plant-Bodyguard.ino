/***********************************************************
File name: rosehack_2025_plant_bodygaurd
***********************************************************/

#define echoPin 7 // number of echo pin
#define trigPin 8 // number of trig pin
int convertValue = 0; // ADC value
int ledPin = 9;   // number of the LED pin
int buzzer = 11;  // number of buzzer pin

long duration;  // duration for ultrasonic sensor
long distance;  // distance measured by ultrasonic sensor

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // Set ledPin into output mode
  pinMode(echoPin, INPUT);  // Set ebhoPin into input mode
  pinMode(trigPin, OUTPUT); // Set trigPin into output mode
  pinMode(buzzer, OUTPUT);  // Set buzzer into output mode
}

void loop() {
  
  // Light Sensor

  convertValue = analogRead(A0);  // Read analog voltage value of A0 port, and save
  // Map analog to the 0-255 range, and works as ledPin duty cycle setting
  analogWrite(ledPin, map(convertValue, 0, 1023, 0, 500));
  // analogWrite(ledPin, map(convertValue, 0, 1023, 0, 255)); // 500 in last part maybe

  // Temperature Measurement

  // Convert analog value of A0 port into digital value
  int adcVal = analogRead(A1);
  // Calculate voltage
  float v = adcVal * 5.0 / 1024;
  // Calculate resistance value of thermistor
  float Rt = 10 * v / (5 - v);
  // Calculate temperature (Kelvin)
  float tempK = 1 / (log(Rt / 10) / 3950 + 1 / (273.15 + 25));
  // Calculate temperature (Celsius)
  float tempC = tempK - 273.15;
  // Calculate temperature (Fahrenheit)
  float tempF = (tempC * (9.0 / 5.0)) + 32;
  // Send the result to computer through serial port
  Serial.println("Current temperature is: ");
  Serial.println(tempK);
  Serial.print(" K, ");
  Serial.println(tempC);
  Serial.print(" C, ");
  Serial.println(tempF);
  Serial.print(" F ");
  delay(500);


  // Ultrasonic Motion Sensor

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;

  Serial.println("Distance: ");
  Serial.print(distance);

  if (distance < 15){
    digitalWrite(buzzer, HIGH); // send high signal to buzzer    
    delay(1); // delay 1ms   
    digitalWrite(buzzer, LOW); // send low signal to buzzer   
    delay(1);  
  }
  else{
    digitalWrite(buzzer, LOW);
  }
  delay(100); 
}

