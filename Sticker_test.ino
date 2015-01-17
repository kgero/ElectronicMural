
int sig = A2;

int LED1 = 1;
int LED2 = 2;
int LED3 = 3;

int power = 0;


void setup() {                
  pinMode(power, OUTPUT); 
  digitalWrite(power, HIGH);
  pinMode(sig, INPUT);
}

void lightled(int hi, int lo, int off) {
  pinMode(hi, OUTPUT);
  digitalWrite(hi, HIGH);
  pinMode(lo, OUTPUT);
  digitalWrite(lo, LOW);
  pinMode(off, INPUT);
}

void lightoff() {
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1, LOW);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED2, LOW);
  pinMode(LED3, OUTPUT);
  digitalWrite(LED3, LOW);
}

void twinkle() {
  lightled(LED2, LED3, LED1);
  delay(4000);
  lightoff();
  lightled(LED3, LED2, LED1);
  delay(4000);
  lightoff();
  lightled(LED1, LED2, LED3);
  delay(4000);
  lightoff();
  lightled(LED2, LED1, LED3);
  delay(4000);
  lightoff();
  lightled(LED1, LED3, LED2);
  delay(4000);
  lightoff();
  lightled(LED3, LED1, LED2);
  delay(4000);
  lightoff();
}

void loop() {
  while (analogRead(sig) > 760) {
    twinkle();
  }
}
