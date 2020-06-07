//AHSD
//GitHub
//led pin is digitalpin 3
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT); //Outputpin definition
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  delay(500);
}
