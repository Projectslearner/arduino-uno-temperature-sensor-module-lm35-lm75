/*
    Project name : Temperature sensor module LM35 LM75
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-temperature-sensor-module-lm35-lm75
*/

const int sensorPin = A0;  // Analog pin connected to the LM35 sensor

void setup() 
{
  Serial.begin(9600);  // Initialize serial communication
}

void loop()
{
  // Read the analog voltage from the LM35 sensor
  int sensorValue = analogRead(sensorPin);

  // Convert the analog value to temperature in Celsius
  float temperatureC = (sensorValue * 5.0 / 1024.0) * 100.0;

  // Print the temperature to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Wait for 1 second before taking the next reading
  delay(1000);
}
