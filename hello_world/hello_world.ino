void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int first = 33;
int second = 34;
int third = 35;

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.begin(9600);
  Serial.println("Hello Lefa~! Selamat siang~. Aku sangat kangen kamu");
  Serial.write(first);
  Serial.write(second);
  Serial.write(third);
  Serial.println("\n");
  delay(1000);
  Serial.println(first);
  Serial.println(second);
  Serial.println(third);
}
