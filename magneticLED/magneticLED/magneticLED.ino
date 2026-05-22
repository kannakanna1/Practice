// 磁気センサーの出力ピン
const int sensorPin = 14;

// 外付けLEDのピン
int ledPin[] = {2, 4, 16,17};

int ledCount = 0;

void setup() {

  // センサーピンを入力
  pinMode(sensorPin, INPUT);

  // LEDピンを出力
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  // シリアル通信開始
  Serial.begin(9600);
}

void loop() {

  // センサーの値を読む
  int magneticState = analogRead(sensorPin);

  // 磁石を検知したら
  if (magneticState >= 2000) {

    Serial.println("磁石を検知しました！");
    switch(ledCount)
    {
      case 0:
      digitalWrite(ledPin[ledCount],HIGH);
      break;
      case 1:
      digitalWrite(ledPin[ledCount],HIGH);
      break;
      case 2:
      digitalWrite(ledPin[ledCount],HIGH);
      break;
      case 3:
      digitalWrite(ledPin[ledCount],HIGH);
      break;      

    }
    if(ledCount<4){
      ledCount++;
    }
  } 
  else {

    Serial.println(magneticState);
    switch(ledCount)
    {
      case 0:
      digitalWrite(ledPin[ledCount],LOW);
      break;
      case 1:
      digitalWrite(ledPin[ledCount],LOW);
      break;
      case 2:
      digitalWrite(ledPin[ledCount],LOW);
      break;
      case 3:
      digitalWrite(ledPin[ledCount],LOW);
      break;
    }      
    if(ledCount>0){
      ledCount--;
    }
  }
  delay(200);

}