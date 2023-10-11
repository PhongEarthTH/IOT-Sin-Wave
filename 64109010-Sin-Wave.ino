float m = 0.0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.printf("%f %f %d\n", sin(m - 9.5), cos(m + 29.8), 0);
  m = m + 0.2;
  delay(60);
}
