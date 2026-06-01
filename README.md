# Smart-Thermometer
Arduino-based Smart Thermometer and Humidity Monitoring System.

Project #2

Objective:
The objective of this project is to measure environmental temperature and humidity using a DHT11 sensor and display the values on an LCD screen. When the temperature exceeds a defined threshold (35°C), the system provides a warning using an LED indicator and LCD message.

Components Used:
Arduino Nano, DHT11 Temperature and Humidity Sensor, 16×2 LCD Display with I2C Module, LED, Resistor, Breadboard, Jumper Wires, USB Cable (Laptop-powered connection).

Procedure:
First, the Arduino Nano was placed on the breadboard to build the main control circuit.
Then the DHT11 sensor was connected to the Arduino. The LCD display with I2C module was connected using the SDA and SCL pins of the Arduino.The LED’s positive (anode) terminal was connected to Digital Pin 5 of the Arduino Nano.
The negative (cathode) terminal of the LED was connected to a resistor, and the resistor was connected to the GND pin for current protection.
All VCC and GND connections of the components were properly connected to the breadboard power rails.The system was powered directly using a laptop through a USB cable.After completing all hardware connections, the program code was written using Arduino IDE and uploaded to the Arduino Nano via USB cable.

Working Principle:
The DHT11 sensor continuously measures temperature and humidity and sends the data to the Arduino.If the temperature is 35°C or higher:
The LCD displays “HOT AIR FLOW” and “TEMP UP!”The LED blinks repeatedly as a warning signal
If the temperature is below 35°C:The LED remains OFF.The LCD shows real-time temperature and humidity values.This allows the system to monitor environmental conditions in real time.

Conclusion:
The Smart Temperature Monitoring System successfully measures temperature and humidity and displays real-time data on an LCD screen. When the temperature rises above the threshold, the system provides an alert using LED blinking and LCD warning messages. This project demonstrates the practical use of Arduino Nano, DHT11 sensor, and LCD display in environmental monitoring systems.
