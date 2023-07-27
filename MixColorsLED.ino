/*
  Playing with RGB LED Colors
*/
// Header
// Variables
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int j;
int red[3] = {255,0,0};
int green[3] = {0,255,0};
int blue[3] = {0,0,255};
int yellow[3] = {255,255,0};
int magenta[3] = {255,0,255};
int cyan[3] = {0,255,255};
int orange[3] = {255,165,0};
int purple[3] = {128,0,128};
int turquoise[3] = {0,206,209};
int pink[3] = {255,192,203};
int lime_green[3] = {50,205,50};
int sky_blue[3] = {135,206,250};
int peach[3] = {255,218,185};
int lavender[3] = {230,230,250};
int teal[3] = {0,128,128};
int brown[3] = {165,42,42};
int olive_green[3] = {128,128,0};
int maroon[3] = {128,0,0};
int gold[3] = {255,215,0};
int silver[3] = {192,192,192};
int off[3] = {0,0,0};
String msg = "Choose a color you want the LED to display.";
String msg2 = "The colors to choose are: ";
Strint colorList[20] = {"Red", "Green", "Blue", "Yellow", "Magenta", "Cyan", "Orange", "Purple", "Turquoise", "Pink", "Lime Green", "Sky Blue", "Peach", "Lavender", "Teal", "Brown", "Olive Green", "Maroon", "Gold", "Silver"}
String msg3 = "You chose color: ";
String colorLED;

// Functions
int LEDOn(int LEDc[]){ // RGB value
  for (int j=0; j<3; j++){
    analogWrite(redPin, LEDc[j]);
    analogWrite(greenPin, LEDc[j]);
    analogWrite(bluePin, LEDc[j]);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  Serial.println(msg2);
  for (j = 0; j < 20; j++){
    Serial.print(colorList[j] + ", ");
  }
  while (Serial.available() == 0){}
  colorLED = Serial.readString()
  for (j=0; j < colorLED.length(); j++) { // This will take the input data and convert to lowercase
    if (colorLED[j] = " "){
      colorLED[j] = "_";
    }
    colorLED[j] = tolower(colorLED[j]);
  }
  Serial.print(msg3);
  Serial.println(colorLED);
  if(colorLED == "red"){
    LEDOn(red[]);
  } else if(colorLED == "green") {
    LEDOn(green[]);
  } else if(colorLED == "blue"){
    LEDOn(blue[]);
  } else if(colorLED){

  }
}
