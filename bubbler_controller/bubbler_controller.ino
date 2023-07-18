// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(2, HIGH);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(4) == HIGH) {
    digitalWrite(2, LOW);
    delay(50); // Wait for 1000 millisecond(s)
    digitalWrite(2, HIGH);
  }
  while (digitalRead(4) == HIGH) {
    delay(100); // Wait for 100 millisecond(s)
  }
}
