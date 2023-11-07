#include <SoftwareSerial.h>
#include <Servo.h>
Output
Servo servo, servol;
int pinBluetoothTX = 10;
int pinBluetoothRX = 11;
SoftwareSerial bluetooth (pinBluetoothTX, pinBluetoothRX);
int pinServo = 12;
int pinServo1 = 7;
int led = 13;
char letra;
void setup() {
Serial.begin (9600);
servo.attach (pinServo);
servo.write(0);
servo1.attach (pinServol);
servo1.write(0);
bluetooth.begin (9600);
pinMode (led, OUTPUT);
}
void loop() {
if (bluetooth.available() > 0){
letra = bluetooth.read ();
Serial.println(letra);
if (letra == 'E') {
Serial.println("LED Encendido");
digitalwrite(led, HIGH);
}
if (letra == 'A') S
Serial.printin("LED Apagado");
digitalWrite(led, LOW);
}
if (letra == '0')
Serial.printIn("0 grados"); servo.write(0);
}
if (letra == '1') {
Serial.printIn("30 grados"); servo.write(30);
}
if (letra == '2') {
Serial.println("60 grados");
}
if (letra == '3') {
Serial.println("90 grados");
}
if (letra == '3') {
Serial.println("120 grados");
}
if (letra == '4') {
Serial.println("150 grados");
}
if (letra == '5') {
Serial.println("180 grados");
}