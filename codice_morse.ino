void setup() {
  pinMode(5, OUTPUT);
  Serial.begin(9450);
}

void loop() {
  if (Serial.available()){
  int comando = Serial.read();
  if (comando == 'a'){
    Serial.print("a");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  }
  if (comando == 'b'){
    Serial.print("b");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
  if (comando == 'c'){
    Serial.print("c");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
  if (comando == 'd'){
    Serial.print("d");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
    if (comando == 'e'){
    Serial.print("e");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
    if (comando == 'f'){
    Serial.print("f");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
    if (comando == 'g'){
    Serial.print("g");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
  if (comando == 'h'){
    Serial.print("h");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
  if (comando == 'i'){
    Serial.print("i");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
   if (comando == 'l'){
    Serial.print("l");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  } 
   if (comando == 'm'){
    Serial.print("m");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  }   
   if (comando == 'n'){
    Serial.print("n");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  } 
   if (comando == 'o'){
    Serial.print("o");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  } 
  if (comando == 'p'){
    Serial.print("p");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
  if (comando == 'q'){
    Serial.print("q");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  }
  if (comando == 'r'){
    Serial.print("r");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }
  if (comando == 's'){
    Serial.print("s");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  }  
  if (comando == 't'){
    Serial.print("t");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  }  
  if (comando == 'u'){
    Serial.print("u");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  } 
  if (comando == 'v'){
    Serial.print("v");
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
  } 
  if (comando == 'z'){
    Serial.print("z");
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
     delay(500);
    digitalWrite(5, HIGH);
    delay(1500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
    delay(500);
    digitalWrite(5 , HIGH);
    delay(450);
    digitalWrite(5, LOW);
  } 
  }
}
