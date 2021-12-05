void setup(){
 pinMode(6, OUTPUT);
 pinMode(4, OUTPUT);
}

void loop(){
  digitalWrite(6, HIGH);
  delay(600);
  digitalWrite(4, HIGH);
  delay(600);
  digitalWrite(6, LOW);
  delay(600);
  digitalWrite(4, LOW);
}
