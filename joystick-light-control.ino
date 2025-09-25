//in thsi file, I am figuring out how I can code the joystick and manipulate the data in order to know where the joystick is moving

 
 float xaxis = A0;
 float yaxis = A1;
 
 int xnumbers;
 int ynumbers; 

int red = 2;
int green = 5;
int blue = 10;
int yellow = 11;

 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(yellow,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

 xnumbers = analogRead(xaxis);
 Serial.println(xnumbers);

if(xnumbers > 520){
digitalWrite(red,HIGH);

}


 ynumbers = analogRead(yaxis);
 


}
