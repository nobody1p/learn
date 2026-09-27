#include <Servo.h>
Servo myServo;
int pos;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(9);
  myServo.write(0);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
for(pos=0;pos<=180;pos+=45){
  myServo.write(pos);
  Serial.println(pos);
  delay(15);
}
for(pos=180;pos>=0;pos--){
  myServo.write(pos);
  Serial.println(pos);
  delay(15);
}
}
