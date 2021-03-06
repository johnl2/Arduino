/*
  Arrays
 
 Demonstrates the use of  an array to hold pin numbers
 in order to iterate over the pins in a sequence. 
 Lights multiple LEDs in sequence, then in reverse.
 
 Unlike the For Loop tutorial, where the pins have to be
 contiguous, here the pins can be in any random order.
 
 The circuit:
 * LEDs from pins 2 through 7 to ground
 
 created 2006
 by David A. Mellis
 modified 30 Aug 2011
 by Tom Igoe 

This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Array
 */

int timer = 1000;           // The higher the number, the slower the timing.
int ledPins[] = { 
  3, 5, 6, 9, 10, 11 };       // an array of pin numbers to which LEDs are attached
int pinCount = 6;           // the number of pins (i.e. the length of the array)

void setup() {
  int thisPin;
  // the array elements are numbered from 0 to (pinCount - 1).
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
    pinMode(ledPins[thisPin], OUTPUT);      
  }
  Serial.begin(9600);
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) { 
    // turn the pin on:
    analogWrite(ledPins[thisPin], 0);   
    delay(timer); 
    Serial.println(ledPins[thisPin]) ;   
    // turn the pin off:
    digitalWrite(ledPins[thisPin], 255);    
  }
}
