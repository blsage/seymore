/*
   Seymore
   I have, in the past, struggled greatly with watering my succulents.
   I turned a few years back to a zero_scape lawn [because I’m
   majoring in agriculture (STEAM)]. The real reason, though, was
   because I was really bad at watering my lawn.

   Combine STEM with A (Agriculture) to create a digital garden. Use
   the arduino to monitor temperature, moisture, and light for a
   succulent.

   Import Info:
   -> Target MoistVal: 413

   by Ben and Nicole
*/

#include <LiquidCrystal.h>

//initialize variables for sensor pins
int moistPin = 2;
//int tempPin = 1;
int lightPin = 1;

//initialize variables to store readings from sensors
int moistVal = 0;
int tempVal = 0;
int lightVal = 0;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {

  //initialize the serial port
  Serial.begin(9600);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  clearScreen();
  lcd.print("Seymore");

  clearScreen();
  lcd.print("Ben & Nicole");
  lcd.setCursor(0, 0);
  lcd.print("digi_scape by");
  delay(1000);
  
}

void loop() {

    clearScreen();
    moistVal = analogRead(moistPin);
    lcd.print("moisture: ");
    lcd.print(moistVal);
    lcd.setCursor(0, 0);
    lcd.print("water you doing");

    clearScreen();
    lightVal = analogRead(lightPin);
    lcd.print("light: ");
    lcd.print(lightVal);
    lcd.setCursor(0, 0);
    lcd.print("watt watt");

    clearScreen();
    lcd.print("bright");
    lcd.setCursor(0, 0);
    lcd.print("nicole isnt very");

}

void clearScreen() {
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 1);
}
