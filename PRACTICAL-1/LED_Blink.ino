// Describe this function...
void light_on() {
  digitalWrite(12, HIGH);
}

// Describe this function...
void delay1sec() {
  delay(1000);
}

// Describe this function...
void light_off() {
  digitalWrite(12, LOW);
}

// Describe this function...
void light_on2() {
  digitalWrite(13, HIGH);
}

// Describe this function...
void light_off2() {
  digitalWrite(13, LOW);
}


void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  light_on();
  delay1sec();
  light_off();
  delay1sec();
  light_on2();
  delay1sec();
  light_off2();
  delay1sec();

}