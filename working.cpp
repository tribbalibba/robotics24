
#include <Arduino.h>

void setup() {
    pinMode(D5, OUTPUT);   // PWM for Motor 1
    pinMode(D4, OUTPUT);   // Direction for Motor 1
    pinMode(D3, OUTPUT);   // PWM for Motor 2
    pinMode(D2, OUTPUT);   // Direction for Motor 2
}

void loop() {

    // Motor 1 forward
    digitalWrite(D4, HIGH);     // set direction forward
    analogWrite(D5, 255);        // Motor 1 maximum speed

    // Motor 2 forward
    digitalWrite(D2, HIGH);     // set direction forward
    analogWrite(D3, 255);        // Motor 2 maximum speed


}
