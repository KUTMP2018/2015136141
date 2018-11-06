int buttonpin = 2;
int buttonState = 0;
int ledcount = 0;
int redPin = 10;
int greenPin = 9;
int bluePin = 8;
int redPin2 = 5;
int greenPin2 = 4;
int bluePin2 = 3;
int redPin3 = 44;
int greenPin3 = 46;
int bluePin3 = 48;
int redPin4 = 38;
int greenPin4 = 40;
int bluePin4 = 42;
int redPin5 = 49;
int greenPin5 = 47;
int bluePin5 = 45;

void setup() {
  pinMode(buttonpin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
  pinMode(redPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);
  pinMode(bluePin2, OUTPUT); 
  pinMode(redPin3, OUTPUT);
  pinMode(greenPin3, OUTPUT);
  pinMode(bluePin3, OUTPUT); 
  pinMode(redPin4, OUTPUT);
  pinMode(greenPin4, OUTPUT);
  pinMode(bluePin4, OUTPUT); 
  pinMode(redPin5, OUTPUT);
  pinMode(greenPin5, OUTPUT);
  pinMode(bluePin5, OUTPUT); 
}

void loop() {
  buttonState = digitalRead(buttonpin);
  if(buttonState == 0){
    delay(180);
     ledcount++;
     if(ledcount == 1) {
      setColor(255, 255, 255);
      setColor2(255, 255, 255);
      setColor3(255, 255, 255);
      setColor4(255, 255, 255);
      setColor5(255, 255, 255);}
     if(ledcount == 2) {
      setColor(255, 255, 255);
      setColor2(255, 68, 0);
      setColor3(255, 0, 0);
      setColor4(68, 255, 80);
      setColor5(90, 100, 100);}
     if(ledcount == 3) {
      setColor(0, 139, 139); 
      setColor2(255, 20, 147);
      setColor3(255, 255, 0);
      setColor4(255, 255, 255);
      setColor5(20, 100, 50);}
     if(ledcount == 4){
      for(float x = 0; x < PI; x = x+0.00001){
             setColor(255*abs(sin(x*(180/PI))),255*abs(sin((x+PI/3)*(180/PI))),255*abs(sin((x+(2*PI)/3)*(180/PI))) );
             setColor2(255*abs(sin(x*(180/PI))),255*abs(sin((x+PI/3)*(180/PI))),255*abs(sin((x+(2*PI)/3)*(180/PI))) );
             setColor3(255*abs(sin(x*(180/PI))),255*abs(sin((x+PI/3)*(180/PI))),255*abs(sin((x+(2*PI)/3)*(180/PI))) );
             setColor4(255*abs(sin(x*(180/PI))),255*abs(sin((x+PI/3)*(180/PI))),255*abs(sin((x+(2*PI)/3)*(180/PI))) );
             setColor5(255*abs(sin(x*(180/PI))),255*abs(sin((x+PI/3)*(180/PI))),255*abs(sin((x+(2*PI)/3)*(180/PI))) );
             if(digitalRead(buttonpin) == 0){
              break;
              }
             }
      }
      if(ledcount == 5){
        while(digitalRead(buttonpin) == 1){
          setColor(255, 255, 255);
          delay(130);
          setColor2(255, 255, 0);
          delay(130);
          setColor3(255, 0, 80);
          delay(130);
          setColor4(240, 90, 180);
          delay(130);
          setColor5(180, 20, 20);
          delay(130);
          setColor(0, 0, 0);
          delay(130);
          setColor2(0, 0, 0);
          delay(130);
          setColor3(0, 0, 0);
          delay(130);
          setColor4(0, 0, 0);
          delay(130);
          setColor5(0, 0, 0);
          delay(130);
          
          if(digitalRead(buttonpin) == 0){
              break;
             }
        }
      }
      if(ledcount == 6){
         while(1){
          setColor(255, 255, 255);
          setColor2(255, 255, 0);
          setColor3(255, 0, 80);
          setColor4(240, 90, 180);
          setColor5(180, 20, 20);
          delay(80);
          setColor(255, 255, 0);
          setColor2(80, 0, 80);
          setColor3(255, 20, 147);
          setColor4(20, 25, 80);
          setColor5(70, 120, 20);
          delay(80);
          setColor(80, 0, 80);
          setColor2(255, 255, 255);
          setColor3(80, 20, 80);
          setColor4(244, 50, 50);
          setColor5(0, 70, 0);
          delay(80);

          if(digitalRead(buttonpin) == 0){
              break;
             }
        }
        
      }
     if(ledcount == 7) ledcount=0;
      if(ledcount == 0) {
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
      digitalWrite(redPin2, LOW);
      digitalWrite(greenPin2, LOW);
      digitalWrite(bluePin2, LOW);
      digitalWrite(redPin3, LOW);
      digitalWrite(greenPin3, LOW);
      digitalWrite(bluePin3, LOW);       
      digitalWrite(redPin4, LOW);
      digitalWrite(greenPin4, LOW);
      digitalWrite(bluePin4, LOW);   
      digitalWrite(redPin5, LOW);
      digitalWrite(greenPin5, LOW);
      digitalWrite(bluePin5, LOW);  
     }
      
  }
}

void setColor5(int red, int green, int blue)
{
  analogWrite(redPin5, red);
  analogWrite(greenPin5, green);
  analogWrite(bluePin5, blue); 
}
void setColor4(int red, int green, int blue)
{
  analogWrite(redPin4, red);
  analogWrite(greenPin4, green);
  analogWrite(bluePin4, blue); 
}
void setColor3(int red, int green, int blue)
{
  analogWrite(redPin3, red);
  analogWrite(greenPin3, green);
  analogWrite(bluePin3, blue); 
}

void setColor2(int red, int green, int blue)
{
  analogWrite(redPin2, red);
  analogWrite(greenPin2, green);
  analogWrite(bluePin2, blue); 
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue); 
}
