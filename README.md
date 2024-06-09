# Temperature Monitoring with LM35 Sensor Module

#### Project Overview

This project demonstrates how to measure temperature using an LM35 temperature sensor module with an Arduino Uno. The LM35 sensor provides accurate temperature readings in Celsius, and the Arduino is used to display the temperature readings on the serial monitor.

#### Components Needed

1. **Arduino Uno**
2. **LM35 Temperature Sensor Module**
3. **Jumper Wires**

### Block Diagram



#### Pin Connections

- **LM35 Sensor Module:**
  - VCC: Connect to Arduino 5V
  - OUT: Connect to Arduino analog pin A0
  - GND: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the OUT pin of the LM35 sensor module to Arduino analog pin A0.
   - Connect the VCC pin of the sensor module to Arduino 5V.
   - Connect the GND pin of the sensor module to Arduino GND.

2. **Initialize the System:**
   - Begin serial communication at a baud rate of 9600 in the setup function.

3. **Read Sensor Values:**
   - Read the analog voltage from the LM35 sensor using `analogRead(sensorPin)`.

4. **Convert to Temperature:**
   - Convert the analog value to temperature in Celsius using the formula provided in the datasheet:
     - Temperature (in Celsius) = (Analog Value * 5.0 / 1024.0) * 100.0.

5. **Display Readings:**
   - Print the temperature to the serial monitor with the appropriate unit (°C).

6. **Repeat Measurement:**
   - Add a delay of 1 second between temperature readings to avoid rapid readings.

#### Applications

- **Home Automation:** Monitor room temperature for home automation and climate control applications.
- **Environmental Monitoring:** Use the sensor for monitoring temperature in various indoor environments.
- **Educational Projects:** Learn about temperature sensing and analog-to-digital conversion using the LM35 sensor and Arduino.

#### Notes

- Ensure proper power supply and ground connections for accurate temperature readings.
- Handle the LM35 sensor module carefully to avoid damage to the delicate sensor component.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner