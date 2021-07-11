/*----- cametaif -----*/



const int D4 = 4;
const float freq = 120;

void setup() {
  // put your setup code here, to run once:
  pinMode(D4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(D4, freq);
}
