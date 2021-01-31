#include <DHT.h>

DHT dht(A4, DHT11);
void setup() {
  Serial.begin(9600);

}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temprature: ");
  Serial.println(temperature);
  Serial.print("Humidity: ");
  Serial.println(humidity);
  delay(1000);
}
