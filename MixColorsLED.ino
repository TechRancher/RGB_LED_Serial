/*
  Playing with RGB LED Colors. To learn more about this code check out the redME.adoc
*/
// Header
// Variables
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int j;
int red[3] = { 255, 0, 0};
int green[3] = { 0, 255, 0 };
int blue[3] = { 0, 0, 255 };
int yellow[3] = { 255, 255, 0 };
int magenta[3] = { 255, 0, 255 };
int cyan[3] = { 0, 255, 255 };
int orange[3] = { 255, 165, 0 };
int purple[3] = { 128, 0, 128 };
int turquoise[3] = { 0, 206, 209 };
int pink[3] = { 255, 192, 203 };
int lime_green[3] = { 50, 205, 50 };
int sky_blue[3] = { 135, 206, 250 };
int peach[3] = { 255, 218, 185 };
int lavender[3] = { 230, 230, 250 };
int teal[3] = { 0, 128, 128 };
int brown[3] = { 165, 42, 42 };
int olive_green[3] = { 128, 128, 0 };
int maroon[3] = { 128, 0, 0 };
int gold[3] = { 255, 215, 0 };
int silver[3] = { 192, 192, 192 };
int off[3] = { 0, 0, 0 };
int k[3];
String msg = "Choose a color you want the LED to display.";
String msg2 = "The colors to choose are: ";
String colorList[21] = { "Red", "Green", "Blue", "Yellow", "Magenta", "Cyan", "Orange", "Purple", "Turquoise", "Pink", "Lime Green", "Sky Blue", "Peach", "Lavender", "Teal", "Brown", "Olive Green", "Maroon", "Gold", "Silver", "Off" };
String msg3 = "You chose color: ";
String colorLED;

// Functions
int LEDOn(int LEDc[]) {  // RGB value
  analogWrite(redPin, LEDc[0]);
  analogWrite(greenPin, LEDc[1]);
  analogWrite(bluePin, LEDc[2]);
}
String toUnderscore(String color){
  for(int j = 0; j < color.length(); j++){
    if (color[j] == " "){
      color[j] = "_";
    }
    return color;
  }
}
String LowerCase(String color){
  for(int j = 0; j < color.length(); j++){
    color[j] = tolower(color[j]);
  }
  return color;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial){
    ;
  }
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  Serial.println(msg2);
  for (j = 0; j < 21; j++) {
    Serial.print(colorList[j] + ", ");
  }
  while (Serial.available() == 0) {}
  colorLED = Serial.readString();
  toUnderscore(colorLED);
  LowerCase(colorLED);
  
  Serial.print(msg3);
  Serial.println(colorLED);

  if (colorLED == "red") {
    LEDOn(red);
  } else if (colorLED == "green") {
    LEDOn(green);
  } else if (colorLED == "blue") {
    LEDOn(blue);
  } else if (colorLED == "yellow") {
    LEDOn(yellow);
  } else if (colorLED == "magenta") {
    LEDOn(magenta);
  } else if (colorLED == "cyan") {
    LEDOn(cyan);
  } else if (colorLED == "orange") {
    LEDOn(orange);
  } else if (colorLED == "purple") {
    LEDOn(purple);
  } else if (colorLED == "turquoise") {
    LEDOn(turquoise);
  } else if (colorLED == "pink") {
    LEDOn(pink);
  } else if (colorLED == "lime green") {
    LEDOn(lime_green);
  } else if (colorLED == "sky blue") {
    LEDOn(sky_blue);
  } else if (colorLED == "peach") {
    LEDOn(peach);
  } else if (colorLED == "lavender") {
    LEDOn(lavender);
  } else if (colorLED == "teal") {
    LEDOn(teal);
  } else if (colorLED == "brown") {
    LEDOn(brown);
  } else if (colorLED == "olive green") {
    LEDOn(olive_green);
  } else if (colorLED == "maroon") {
    LEDOn(maroon);
  } else if (colorLED == "gold") {
    LEDOn(gold);
  } else if (colorLED == "silver") {
    LEDOn(silver);
  } else {
    LEDOn(off);
  }
}
