unsigned long last_time = 0;
unsigned long count = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  count++;
  if (millis() > last_time+1000) {
    Serial.println(count);
    count = 0;
    last_time = millis();
  }
}
