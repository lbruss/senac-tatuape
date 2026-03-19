#define BUZZER 7

// Botões
#define INPUT_A 13
#define INPUT_B 12
#define INPUT_C 11
#define INPUT_D 10

// LEDs
#define OUTPUT_A 2
#define OUTPUT_B 3
#define OUTPUT_C 4
#define OUTPUT_D 5

const int MAX_LEVEL = 100;

int sequence[MAX_LEVEL];
int userSequence[MAX_LEVEL];

int currentLevel = 1;
int speed = 500;

// Melodia de erro
int melody[] = {262,196,196,220,196,0,247,262};
int durationNotes[] = {4,8,8,4,4,4,4,4};

void setup() {

  pinMode(INPUT_A, INPUT_PULLUP);
  pinMode(INPUT_B, INPUT_PULLUP);
  pinMode(INPUT_C, INPUT_PULLUP);
  pinMode(INPUT_D, INPUT_PULLUP);

  pinMode(OUTPUT_A, OUTPUT);
  pinMode(OUTPUT_B, OUTPUT);
  pinMode(OUTPUT_C, OUTPUT);
  pinMode(OUTPUT_D, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  digitalWrite(OUTPUT_A, LOW);
  digitalWrite(OUTPUT_B, LOW);
  digitalWrite(OUTPUT_C, LOW);
  digitalWrite(OUTPUT_D, LOW);

  randomSeed(millis());
}

void loop() {

  if (currentLevel == 1) {
    generateSequence();
  }

  showSequence();
  readSequence();
}

void showSequence() {

  digitalWrite(OUTPUT_A, LOW);
  digitalWrite(OUTPUT_B, LOW);
  digitalWrite(OUTPUT_C, LOW);
  digitalWrite(OUTPUT_D, LOW);

  for (int i = 0; i < currentLevel; i++) {

    int pin = sequence[i];

    digitalWrite(pin, HIGH);

    if (pin == OUTPUT_A) tone(BUZZER, 200);
    if (pin == OUTPUT_B) tone(BUZZER, 300);
    if (pin == OUTPUT_C) tone(BUZZER, 400);
    if (pin == OUTPUT_D) tone(BUZZER, 500);

    delay(speed);

    noTone(BUZZER);
    digitalWrite(pin, LOW);

    delay(200);
  }
}

void readSequence() {

  int flag = 0;

  for (int i = 0; i < currentLevel; i++) {

    flag = 0;

    while (flag == 0) {

      if (digitalRead(INPUT_A) == LOW) {

        digitalWrite(OUTPUT_A, HIGH);
        tone(BUZZER, 200);
        delay(300);

        userSequence[i] = OUTPUT_A;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_A, LOW);
      }

      if (digitalRead(INPUT_B) == LOW) {

        digitalWrite(OUTPUT_B, HIGH);
        tone(BUZZER, 300);
        delay(300);

        userSequence[i] = OUTPUT_B;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_B, LOW);
      }

      if (digitalRead(INPUT_C) == LOW) {

        digitalWrite(OUTPUT_C, HIGH);
        tone(BUZZER, 400);
        delay(300);

        userSequence[i] = OUTPUT_C;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_C, LOW);
      }

      if (digitalRead(INPUT_D) == LOW) {

        digitalWrite(OUTPUT_D, HIGH);
        tone(BUZZER, 500);
        delay(300);

        userSequence[i] = OUTPUT_D;
        flag = 1;
        noTone(BUZZER);

        digitalWrite(OUTPUT_D, LOW);
      }
    }

    if (userSequence[i] != sequence[i]) {
      errorSequence();
      return;
    }
  }

  correctSequence();
}

void generateSequence() {

  for (int i = 0; i < MAX_LEVEL; i++) {

    int randomLED = random(2, 6);
    sequence[i] = randomLED;
  }
}

void melodyError() {

  for (int i = 0; i < 8; i++) {

    int noteDuration = 1000 / durationNotes[i];

    tone(BUZZER, melody[i], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;

    delay(pauseBetweenNotes);

    noTone(BUZZER);
  }
}

void errorSequence() {

  digitalWrite(OUTPUT_A, HIGH);
  digitalWrite(OUTPUT_B, HIGH);
  digitalWrite(OUTPUT_C, HIGH);
  digitalWrite(OUTPUT_D, HIGH);

  delay(250);

  digitalWrite(OUTPUT_A, LOW);
  digitalWrite(OUTPUT_B, LOW);
  digitalWrite(OUTPUT_C, LOW);
  digitalWrite(OUTPUT_D, LOW);

  delay(250);

  melodyError();

  currentLevel = 1;
  speed = 500;
}

void correctSequence() {

  if (currentLevel < MAX_LEVEL) {
    currentLevel++;
  }

  speed -= 50;

  delay(200);
}
