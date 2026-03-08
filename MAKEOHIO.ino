#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


const int out1 = 32;
const int out2 = 33;
const int out3 = 25;
const int out4 = 26;
const int out5 = 27;

const int in1 = 15;
const int in2 = 16;


bool isThisShitOn = false;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin ledPin as an output.
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(out5, OUTPUT);

 // isThisShitOn = false;
}

// the loop function runs over and over again forever
void loop() {

  int inputVal = digitalRead(in1);
  int inputVal2 = digitalRead(in2);
  if(inputVal2 != 0){
    printf("THIS WORKS");
  }

  delay(1000);

  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  digitalWrite(out3, LOW);
  digitalWrite(out4, LOW);
  digitalWrite(out5, LOW);

  delay(200);

  if (inputVal == HIGH) {
    int random_num = (rand() % 5) + 1;
    switch (random_num) {
      case 1:
        digitalWrite(out1, HIGH);
        delay(1000);
        break;
      case 2:
        digitalWrite(out2, HIGH);
        delay(1000);
        break;
      case 3:
        digitalWrite(out3, HIGH);
        delay(1000);
        break;
      case 4:
        digitalWrite(out4, HIGH);
        delay(1000);
        break;
      case 5:
        digitalWrite(out5, HIGH);
        delay(1000);
        break;
    }
  }
}
