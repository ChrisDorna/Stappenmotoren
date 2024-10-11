int blauw = 8;
int roze = 9;
int geel = 10;
int oranje = 11;
int pauze = 5;

void setup() {
  pinMode(blauw, OUTPUT);
  pinMode(roze, OUTPUT);
  pinMode(geel, OUTPUT);
  pinMode(oranje, OUTPUT);
}

void loop() {
  digitalWrite(oranje, LOW);
  digitalWrite(blauw, HIGH);
  delay(pauze);
  digitalWrite(blauw, LOW);
  digitalWrite(roze, HIGH);
  delay(pauze);
  digitalWrite(roze, LOW);
  digitalWrite(geel, HIGH);
  delay(pauze);
  digitalWrite(geel, LOW);
  digitalWrite(oranje, HIGH);
  delay(pauze);
}
