void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  // 처음 1초 동안 깜박거리기
  digitalWrite(7, LOW);
  delay(1000);

  // 다음 1초 깜박이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(7, HIGH);
    delay(100);

    digitalWrite(7, LOW);
    delay(100);
  }

  // LED 끄기
  digitalWrite(7, HIGH);

  // 무한루프로 종료
  while (1) {
  }
}
