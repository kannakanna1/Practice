// MCP9700A 軽量版

const int tempPin = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {

  int value = analogRead(tempPin);

  // mV計算（整数）
  long mv = value * 3300L / 1023;

  // 温度計算
  long temp = (mv - 500) / 10;

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println(" C");

  delay(1000);
}