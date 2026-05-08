#include<LiquidCrystal.h>
LiquidCrystal lcd(12,8,7,6,5,4);//RS,E,D4,D5,D6,D7
int trigpin=9;
int echopin=13;
long duration;
float distance;
             

void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  analogWrite(11,90);//contrast
  analogWrite(3,200);//backlight
  lcd.begin(16,2);

}

void loop() {
  lcd.clear();
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  duration=pulseIn(echopin,HIGH);//calculates how long echopin was high
  distance=(duration*0.034)/2;
  
  lcd.setCursor(0,0);
  lcd.print("distance:");
  lcd.print(distance);
  lcd.print("cm");
  delay(1000);


}
