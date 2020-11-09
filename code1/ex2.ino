int led1 = 5;
int led2 = 6;
int led3 = 9;
int led4 = 10;
int tim = 7;
int brightness;
int tim1= 10;
void setup() {
  
  pinMode(led1 , OUTPUT); 
  pinMode(led2 , OUTPUT); 
  pinMode(led3 , OUTPUT); 
  pinMode(led4 , OUTPUT); 

}

void loop() {
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led1 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led2 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led3 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led4 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led4 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led3 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led2 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led1 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led4 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led3 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led2 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 0 ; brightness <=255 ; brightness += 5)
{
  analogWrite (led1 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led1 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led2 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led3 , brightness);
  delay(tim);
}
delay(tim1);
for(brightness = 255 ; brightness >=0 ; brightness -= 5)
{
  analogWrite (led4 , brightness);
  delay(tim);
}
delay(tim1);
}
