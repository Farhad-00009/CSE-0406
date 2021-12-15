#include <Keypad.h> 
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns as this is a 4*4 Keypad

char keys[ROWS][COLS] = {

{'7','8','9','/'},

{'4','5','6','*'},

{'1','2','3','-'},

{'c','0','=','+'}

}; // defining the keys in the keypad

byte rowPins[ROWS] = { 13, 12, 11, 10 };// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte colPins[COLS] = { 9, 8, 7, 6 }; // Connect keypad COL0, COL1, COL2 and COL3 to these Arduino pins.

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); // Create the Keypad variable to identify and store the pressed key.




char key;

void setup() {
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);

// initialize the serial monitor
}

void loop(){
  char key = kpd.getKey();
  if (key=='2'){
  digitalWrite(4,HIGH); 
  }
  else if (key=='1'){
  digitalWrite(5,HIGH); 
  }
}
