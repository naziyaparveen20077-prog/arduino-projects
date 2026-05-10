#include<math.h>
int rawvalue;
float R,T,tempc;


void setup() {
  Serial.begin(9600);

}

void loop() {
  rawvalue = analogRead(A0);
  R = 10000.0 * (1023.0 / rawvalue - 1.0);
  T = 1.0 / (1.0/298.15 + (1.0/3950.0) * log(R/10000.0));
  tempc = T - 273.15;
  Serial.print("temp:");
  Serial.print(tempc);
  Serial.println("c");
  delay(1000);

}
