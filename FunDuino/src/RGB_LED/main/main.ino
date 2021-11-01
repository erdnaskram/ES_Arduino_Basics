int LEDblue = 3;
int LEDred = 5;
int LEDgreen = 6;
int b = 1000;
int dark = 0;
int brightnessblue = 150;
int brightnessred = 150;
int brightnessgreen = 150;

void setup() {
  pinMode(LEDblue, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);
}

void loop() {
  analogWrite(LEDblue, brightnessblue);
  delay(b);

  analogWrite(LEDblue, dark);
  analogWrite(LEDred, brightnessred);
  delay(b);  

  analogWrite(LEDred, dark);
  analogWrite(LEDgreen, brightnessgreen);
  delay(b);  

  analogWrite(LEDgreen, dark);

}
