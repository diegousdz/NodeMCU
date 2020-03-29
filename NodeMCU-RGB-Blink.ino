
const int RED = 5;
const int GREEN = 4;
const int BLUE = 0;

void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() { 
  RGB_color(255, 255, 255);
  delay(200);
  RGB_color(255, 0, 0);
  delay(200);
  RGB_color(0, 255, 0);
  delay(200);
  RGB_color(0, 0, 255); 2
  delay(200);
  RGB_color(0, 0, 0);
  delay(200);
  RGB_color(255, 0, 255); // magenta
  delay(200);
  RGB_color(0, 255, 255); // cyan
  delay(200);
  RGB_color(255, 255, 125); // raspberry
  delay(200);
}

void RGB_color(int v1, int v2, int v3)
 {
  analogWrite(RED, v1);
  analogWrite(GREEN, v2);
  analogWrite(BLUE, v3);
}
