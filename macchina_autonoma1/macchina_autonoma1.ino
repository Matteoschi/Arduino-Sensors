//servomotore
#include <Servo.h>
Servo Sterzo;
//ultrasuoni avanti-----------------------------------
const int triggerPortAV = 8;
const int echoPortAV = 10;
const int ledAV = 13;
//ultrasuoni destra-----------------------------------
const int triggerPortDX = 3;
const int echoPortDX = 4;
const int ledDX = 6;
//ultrasuoni Sinistra-----------------------------------
const int triggerPortSX = 11;
const int echoPortSX = 7;
const int ledSX = 12;
 
void setup() {
Serial.begin(9600);
//ultrasuoni avanti-----------------------------------
pinMode(triggerPortAV, OUTPUT);
pinMode(echoPortAV, INPUT);
pinMode(ledAV, OUTPUT);
//ultrasuoni Destra-----------------------------------
pinMode(triggerPortDX, OUTPUT);
pinMode(echoPortDX, INPUT);
pinMode(ledDX, OUTPUT);
//ultrasuoni Sinistra-----------------------------------
pinMode(triggerPortSX, OUTPUT);
pinMode(echoPortSX, INPUT);
pinMode(ledSX, OUTPUT);
// servo motore
Sterzo.attach(9);

}
 
void loop() {
//ultrasuoni avanti-----------------------------------
digitalWrite( triggerPortAV, LOW );
digitalWrite( triggerPortAV, HIGH );
delayMicroseconds( 10 );
digitalWrite( triggerPortAV, LOW );
long durata = pulseIn( echoPortAV, HIGH );
long Avanti = 0.035 * durata / 2;
Serial.print("distanza avanti: ");
if( durata > 38000 ){
Serial.println("Fuori portata   ");
}
else{ 
Serial.println(Avanti); 
}
if(Avanti < 50){
 digitalWrite(ledAV, HIGH);
}
else{
 digitalWrite(ledAV, LOW);
}
//ultrasuoni Destra-----------------------------------
digitalWrite( triggerPortDX, LOW );
digitalWrite( triggerPortDX, HIGH );
delayMicroseconds( 10 );
digitalWrite( triggerPortDX, LOW );
long durataDX = pulseIn( echoPortDX, HIGH );
long Destra = 0.035 * durataDX / 2;
Serial.print("distanza Destra: ");
if( durata > 38000 ){
Serial.println("Fuori portata   ");
}
else{ 
Serial.println(Destra); 
}
if(Destra < 40){
 digitalWrite(ledDX, HIGH);
}
else{
 digitalWrite(ledDX, LOW);
}
//ultrasuoni Sinistra-----------------------------------
digitalWrite( triggerPortSX, LOW );
digitalWrite( triggerPortSX, HIGH );
delayMicroseconds( 10 );
digitalWrite( triggerPortSX, LOW );
long durataSX = pulseIn( echoPortSX, HIGH );
long Sinistra = 0.035 * durataSX / 2;
Serial.print("distanza Sinistra: ");
if( durata > 38000 ){
Serial.println("Fuori portata   ");
}
else{ 
Serial.println(Sinistra); 
}
if(Sinistra < 40){
 digitalWrite(ledSX, HIGH);
}
else{
 digitalWrite(ledSX, LOW);
}
//servo motore per sterzo trovare angolo di sterzata con i valori giusti
Sterzo.write(0);
if ( Avanti < 50 && Destra < 40){
	Sterzo.write(30);
}
if ( Avanti < 50 && Sinistra < 40){
	Sterzo.write(trovare angolazione);
}
if ( Destra < 40){
	Sterzo.write(15);
}
if ( Sinistra < 40){
	Sterzo.write(trovare angolazione);
}
  
}