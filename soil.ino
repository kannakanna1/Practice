// 土壌湿度センサーのピン
const int sensorPin = 14;

// LEDのピン
const int ledPin = 2;

// 湿度の値を入れる変数
int sensorValue = 0;

// 乾燥判定のしきい値
// 数字が小さいほど湿っている
int dryValue = 2000;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {

  // センサーの値を読む
  sensorValue = analogRead(sensorPin);

  // シリアルモニタに表示
  Serial.print("湿度: ");
  Serial.println(sensorValue);

  // 乾いているとき
  if (sensorValue > dryValue) {
    digitalWrite(ledPin, HIGH);
  }
  // 湿っているとき
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}