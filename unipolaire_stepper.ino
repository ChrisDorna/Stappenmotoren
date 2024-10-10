int blauw = 9;
int roze = 10; //groen
int geel = 11;
int oranje = 12;
int pauze = 1000;

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
