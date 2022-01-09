
int pinTrigger = 10;
int pinEcho = 11;
int pinBuzzer = 9;
long roundTripTimeMicroSeconds;

void setup() {
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);

  roundTripTimeMicroSeconds = pulseIn(pinEcho, HIGH);
  int distanceInches = convertToDistance_inch(roundTripTimeMicroSeconds);
  
  Serial.print("Round trip time (micro seconds): ");
  Serial.println(roundTripTimeMicroSeconds);
  Serial.print("Distance:");
  Serial.print(distanceInches);
  Serial.println(" inch");

  if (distanceInches <= 20){
    digitalWrite(pinBuzzer, HIGH);
    delay(3000);
    digitalWrite(pinBuzzer, LOW);
    
  }

  delay(1000);
}
// Converts RTT (in micro seconds) to distance in millimeters
long convertToDistance_mm(long rttMicroSeconds) {
  // sound travels at 343 meters/second or 1mm in 1000 micro seconds
  // oneway time is round-trip time/2
  
  return (rttMicroSeconds * 343)/(2 * 1000);
}


// Converts RTT (in micro seconds) to distance in millimeters
long convertToDistance_cm(long rttMicroSeconds) {
  // 1 cm = 10 mm
  return convertToDistance_mm(rttMicroSeconds)/10;
}


// Converts RTT (in micro seconds) to distance in millimeters
double convertToDistance_inch(long rttMicroSeconds) {
  // 1 inch = 25.4 mm
  return convertToDistance_mm(rttMicroSeconds)/25.4;
}
