

#include <MPU6050_tockn.h>
#include <Wire.h>

MPU6050 mpu6050(Wire);
float angoloX;
float angoloY;
float angoloZ;
unsigned long controleTempo;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(false);
  pinMode(10, OUTPUT); 

 
  pinMode(11, OUTPUT); 
}

void loop() {
  mpu6050.update();
  angoloX = mpu6050.getAngleX();gf  
  angoloY = mpu6050.getAngleY();
  Serial.println(angoloX);
  
    if(angoloX >-47){
    digitalWrite(10, LOW);
  }else{
    digitalWrite(10, HIGH);
  }
  if(angoloY > 57){
  digitalWrite(11, HIGH);
  }else{
   digitalWrite(11, LOW);
  }

  


}
