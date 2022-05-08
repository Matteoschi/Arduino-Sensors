
#include <LiquidCrystal.h>
const int rs=4,er=5,d4=6,d5=7,d6=8,d7=9;
LiquidCrystal lcd(rs,er,d4,d5,d6,d7); 
const int echo = 13;
const int trigger = 12;
const int led = 2;
const int ledprox = 3;
const int lednprox =10;
const int ventola = 11;
const int luceacqua = 1;
int fotoresistenza; 
int acqua;

void setup() {
pinMode(led, OUTPUT);
pinMode(ledprox, OUTPUT);
pinMode(lednprox, OUTPUT);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
pinMode(ventola, OUTPUT);
pinMode(luceacqua, OUTPUT);
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.setCursor(0,0);
lcd.print("Dist in cm =");
lcd.setCursor(0,1);
lcd.print("temp. C =");
lcd.setCursor(17,1);
lcd.print("Acqua =");
lcd.setCursor(17,0);
lcd.print("Ventola : ");
lcd.setCursor(30,0);
lcd.print("Luce: ");


 
}   
void loop() {
fotoresistenza = analogRead(A4); 
lcd.setCursor(35,0);
lcd.print(fotoresistenza);

  
int val=analogRead(A5);
float cel=(float)val*500.0/1024.0-60.0;
Serial.print(" Celsius = ");
Serial.print(cel);
Serial.print(" / Fahrenheit = ");
Serial.print((cel*9)/5+32);
Serial.println("");
  
digitalWrite(trigger, LOW);
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger, LOW);
long durata = pulseIn(echo, HIGH);
long distanza = 0.034*durata / 2;

lcd.setCursor(13,0);
lcd.print(distanza);
lcd.setCursor(10,1);
lcd.print(cel);
  
acqua = analogRead(A3);
lcd.setCursor(25,1);
lcd.print(acqua);  //non ha rispettivo oggetto pk non disponeva tinkerkard
  

  
  if (distanza < 10){
    lcd.setCursor(14,1);
    lcd.print("  ");
  } 
  if (distanza < 100){
    lcd.setCursor(15,1);
    lcd.print(" ");
  }    
  lcd.setCursor(11,0);
  
  if(fotoresistenza > 60){
 digitalWrite(led, HIGH);
}
else{
 digitalWrite(led, LOW);
}
if(distanza < 50){
 digitalWrite(ledprox, HIGH);
}
else{
 digitalWrite(ledprox, LOW);
}

if(distanza > 50){
 digitalWrite(lednprox, HIGH);
}
else{
 digitalWrite(lednprox, LOW);
}
if(cel > 50){
 digitalWrite(ventola, HIGH);
 lcd.setCursor(26,0);
 lcd.print("SI");
}
else{
 digitalWrite(ventola, LOW);
 lcd.setCursor(26,0);
 lcd.print("NO");
}
if(fotoresistenza > 50){
 digitalWrite(luceacqua, HIGH);

}
else{
 digitalWrite(luceacqua, LOW);

}
  


  {
  
    lcd.scrollDisplayLeft();
    
  }
}   