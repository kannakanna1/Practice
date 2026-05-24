#define BUZZER_PIN 18

// 音階
int melody[] = {
  262, 262, 392, 392, 440, 440, 392,
  349, 349, 330, 330, 294, 294, 262
};

// 音の長さ
int noteDurations[] = {
  4,4,4,4,4,4,2,
  4,4,4,4,4,4,2
};

void setup() {

  int size = sizeof(melody) / sizeof(int);

  for (int i = 0; i < size; i++) {

    int noteDuration = 1000 / noteDurations[i];

    tone(BUZZER_PIN, melody[i], noteDuration);

    delay(noteDuration * 1.3);

    noTone(BUZZER_PIN);
  }
}

void loop() {

}