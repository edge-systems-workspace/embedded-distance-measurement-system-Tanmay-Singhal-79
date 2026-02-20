#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author TANMAY SINGHAL
 * @date 2026-02-17
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define TRIG pin (Use pin 9)
 int trigPin = 9;

 // TODO 2:
 // Define ECHO pin (Use pin 10)
 int echoPin = 10;

 // TODO 3:
 // Create variable to store duration
 int echoDuration = 0;

 // TODO 4:
 // Create variable to store calculated distance
 float distanceInCm = 0;

void setup() {

    // TODO 5:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 6:
    // Configure TRIG as OUTPUT
    pinMode(trigPin, OUTPUT);

    // TODO 7:
    // Configure ECHO as INPUT
    pinMode(echoPin, INPUT);

    // TODO 8:
    // Print system initialization message
    Serial.println("Started");
}

void loop() {

    // TODO 9:
    // Set TRIG LOW for 2 microseconds
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // TODO 10:
    // Send 10 microsecond pulse on TRIG
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()
    echoDuration = pulseIn(echoPin, HIGH);

    // TODO 12:
    // Calculate distance in cm
    distanceInCm = echoDuration * 0.034 / 2;

    // TODO 13:
    // Print calculated distance
    Serial.print("Distance: ");
    Serial.print(distanceInCm);
    Serial.println(" cm");

    // TODO 14:
    // Add delay (500ms)
    delay(500);
}
