int led1 = 5;
int led2 = 6;
int led3 = 9;
int led4 = 10;
int tim = 10;
int brightness;


void setup() {
  pinMode(led1 , OUTPUT); 
  pinMode(led2 , OUTPUT); 
  pinMode(led3 , OUTPUT); 
  pinMode(led4 , OUTPUT); 

}

void loop() {
  

  for(brightness = 0 ; brightness <=255 ; brightness ++)
  {
    analogWrite (led1 , brightness);
    analogWrite (led2 , brightness);
    analogWrite (led3 , brightness);
    analogWrite (led4 , brightness); 
    delay(tim);
  }
  
  for(brightness = 255 ; brightness >=0 ; brightness --)
  {
    analogWrite (led1 , brightness);
    analogWrite (led2 , brightness );
    analogWrite (led3 , brightness);
    analogWrite (led4 , brightness);
    delay(tim);
  }
  delay (200);


}
