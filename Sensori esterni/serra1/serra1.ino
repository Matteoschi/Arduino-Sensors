#include <LiquidCrystal.h>
int bottone = 6;
int errore= 13;
int Temperatura = A4;
int AcquaSensore = A5;
int LuceSensore = A3;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() { 
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(bottone, INPUT);
  pinMode(errore, OUTPUT);
}

void loop() {
  int Luce = analogRead(LuceSensore);
  int BOT= digitalRead(bottone);
  Serial.println(BOT);
  if (BOT == HIGH ){
    lcd.setCursor(0,0);
    lcd.print("Luce  ");
  	lcd.print(Luce); 
  }else{
    int Acqua = analogRead(AcquaSensore);
    int lettura = analogRead(Temperatura);
    float voltaggio = 5.0 / 1024 * lettura;
    float temperatura = voltaggio * 100 - 50;
    lcd.setCursor(0,0);
    lcd.print("Acqua      ");
    lcd.print(Acqua);
    lcd.setCursor(0, 1);
    lcd.print("Termostato ");
    lcd.print(temperatura);
    lcd.setCursor(9, 0);  
  }

  

}
