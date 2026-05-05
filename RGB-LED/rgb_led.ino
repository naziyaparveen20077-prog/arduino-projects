int red=11;
int green=10;
int blue=9;

void colorsaturation(int r,int b,int g){
  analogWrite(red,r);
  analogWrite(blue,b);
  analogWrite(green,g);
  delay(1000);
}
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  colorsaturation(0,255,255);//red
  colorsaturation(255,0,255);//blue
  colorsaturation(255,255,0);//green
  colorsaturation(255,0,0);//cyan
  colorsaturation(0,255,0);//yellow
  colorsaturation(0,0,255);//purple
  colorsaturation(0,0,0);//white
  colorsaturation(255,255,255);//off
}
