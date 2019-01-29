int pot=A0;
int deger;
void setup() {
Serial.begin(9600);
pinMode(pot,INPUT);
}
void loop() {
deger=analogRead(pot);
Serial.println(deger);
}
