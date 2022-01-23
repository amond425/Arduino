#include <Servo.h>

Servo rockMotor;
Servo paperMotor;
Servo scissorMotor;

int pos = 0;
int done = 0;

int pinTrigger = 10;
int pinEcho = 12;
int randomNumber = 0;

int Rock = 49;
int Paper = 50;
int Scissors = 53;

long roundTripTimeMicroSeconds;

void setup() {
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(Rock, OUTPUT);
  pinMode(Paper, OUTPUT);
  pinMode(Scissors, OUTPUT);
  Serial.begin(9600);
  //Rock
  rockMotor.attach(49);
  //Paper
  paperMotor.attach(50);
  //Scissors
  scissorMotor.attach(53);
}

void loop() {
  done = 0;
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  roundTripTimeMicroSeconds = pulseIn(pinEcho, HIGH);
  int distanceInches = convertToDistance_inch(roundTripTimeMicroSeconds);

  if (distanceInches <= 4){
    randomNumber = random(1, 4);
    if (randomNumber == 1){
      Serial.println("Computer chose rock!");
      if(done == 0) { 
        rockMotor.write(46);
        delay(3000);
        rockMotor.write(135);
        done = 1;
      }
    }
    else{
      if(randomNumber == 2){
        Serial.println("Computer chose paper!");
        if(done == 0) { 
          paperMotor.write(46);
          delay(3000);
          paperMotor.write(135);
          done = 1;
        }
      }
      else{
        if(randomNumber == 3){
          Serial.println("Computer chose scissors!");
          if(done == 0) { 
            scissorMotor.write(46);
            delay(3000);
            scissorMotor.write(135);
            done = 1;
          }
        }
      }
    }
  }

  delay(1000);
  randomNumber = -1;
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
