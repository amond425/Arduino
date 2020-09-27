void setup() {
   pinMode(A0, INPUT);
   pinMode(8, OUTPUT);
   Serial.begin(9600);  
}

void loop() {
   int Sound = analogRead(A0);
   Serial.println(Sound);


   if (Sound >=60){
      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(8, LOW);
   }
   delay(10);

}

// O______________________________O
