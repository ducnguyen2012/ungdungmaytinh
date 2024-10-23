char dataString[50] = {0};
int a = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  a += 1;
  sprintf(dataString, "%02X", a);
  Serial.println(dataString);
  delay(1000);
}
