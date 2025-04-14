#include "DHT.h"
#define DHT11_PIN 2

DHT dht11(DHT11_PIN, DHT11);

void setup() {
  Serial.begin(9600);
  dht11.begin(); // initialize the sensor
}

void loop() {
  delay(1500);
  float humi  = dht11.readHumidity();
  float tempC = dht11.readTemperature();

  if (isnan(humi) || isnan(tempC)) {
    Serial.println("Failed to read from DHT11 sensor!");
  }
  else {
    Serial.print("DHT11# Humidity: ");
    Serial.print(humi); Serial.println("%");

    Serial.print("Temperature: ");
    Serial.print(tempC); Serial.println("°C");
  }
  Serial.println();
}
