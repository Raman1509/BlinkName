int unit_delay = 250;
void dot() {
  Serial.print(".");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit_delay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit_delay);
}
void dash() {
  Serial.print("-");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit_delay * 3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit_delay);
}
void A() {
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void B() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void C() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void D() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void E() {
  dot();
  delay(unit_delay);
}
void f() {
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void G() {
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void H() {
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void I() {
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void J() {
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void K() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void L() {
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void M() {
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void N() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void O() {
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void P() {
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
}
void Q() {
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void R() {
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void S() {
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}
void T() {
  dash();
  delay(unit_delay);
}
void U() {
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void V() {
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void W() {
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void X() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void Y() {
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
}
void Z() {
  dash();
  delay(unit_delay);
  dash();
  delay(unit_delay);
  dot();
  delay(unit_delay);
  dot();
  delay(unit_delay);
}


void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {

  Serial.print("Raman:-");
  R();
  A();
  M();
  A();
  N();
}