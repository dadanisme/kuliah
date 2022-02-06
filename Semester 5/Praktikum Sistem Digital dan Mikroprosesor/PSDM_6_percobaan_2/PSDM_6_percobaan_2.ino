//PSDM 6
//Muhammad Ramdan
//1904637
//Percobaan 1

int A=8;
int B=9;
int C=10;
int D=11;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);  
}

void pergerakan_1() {
  digitalWrite(A,00);
  digitalWrite(D,1);
  digitalWrite(B,00);
  digitalWrite(C,1);
}

void pergerakan_2() {
  digitalWrite(A,1);
  digitalWrite(D,1);
  digitalWrite(B,00);
  digitalWrite(C,00);
}

void pergerakan_3() {
  digitalWrite(A,1);
  digitalWrite(D,00);
  digitalWrite(B,1);
  digitalWrite(C,00);
}

void pergerakan_4() {
  digitalWrite(A,00);
  digitalWrite(D,00);
  digitalWrite(B,1);
  digitalWrite(C,1);
}

void pergerakan() {
  pergerakan_1(); delay(1000);
  pergerakan_2(); delay(1000);
  pergerakan_3(); delay(1000);
  pergerakan_4(); delay(1000);
}

void loop() {
  pergerakan();
}
