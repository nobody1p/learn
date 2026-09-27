int brightLevel;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(brightLevel=0;brightLevel<=255;brightLevel+=5){
  analogWrite(9,brightLevel);
  Serial.println(brightLevel);
  delay(10);
}
for(brightLevel=255;brightLevel>=0;brightLevel-=5){
  analogWrite(9,brightLevel);
  Serial.println(brightLevel);
  delay(10);
}
}
