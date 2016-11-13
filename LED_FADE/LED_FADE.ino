int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  //set the pin 9 to output
  pinMode(led, OUTPUT);
}

void loop() {
  // analogWrite creates a square wave... 255 means the value is always high
  //0 means always low
  //values inbetween inidcate how small the "off" gap between 2 high values
  analogWrite(led, brightness);

  //increment the brightness
  brightness += fadeAmount;

  //set the conditionds for fading on and off
  
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}
