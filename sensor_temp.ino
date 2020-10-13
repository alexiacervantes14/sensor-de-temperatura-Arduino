void setup() {
pinMode(A0, INPUT);
Serial.begin(9600);
}

void loop() {
  float volt,t=0;
  delay(700);
  volt=analogRead(A0);
  Serial.print("Numero de bits: ");
  Serial.println(volt);
  t=(volt*93)/1023;
  Serial.print("La temperatura es de: ");
  Serial.println(t);
}
