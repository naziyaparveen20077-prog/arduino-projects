int brightness;
int led=8;

void setup() {
 pinMode(led,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  brightness=analogRead(A2);//ldr reading
  Serial.println(brightness);//prints brightness on serial monitor
  if(brightness<=150){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  delay(1000);
}
