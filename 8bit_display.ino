#include <math.h>
int i;
int j;
void setup() {
  // put your setup code here, to run once:
  for(i=2; i<7; i++){
    pinMode(i, OUTPUT);
  }
  for(i=7; i<15; i++){
    pinMode(i, INPUT);
  }
  pinMode(PC0, OUTPUT);
  pinMode(PC1, OUTPUT);
  pinMode(PC2, OUTPUT);
  pinMode(PC3, OUTPUT);
  pinMode(PC10, OUTPUT);
  pinMode(PC11, OUTPUT);
  pinMode(PC6, INPUT);
  pinMode(PC7, INPUT);
}
void onled(int i){
  if (i==1){
     digitalWrite(PC2, HIGH);
     digitalWrite(2, HIGH);
  }
  else if (i==2){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC11, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
  }
  else if (i==3){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC11, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH); 
     digitalWrite(3, HIGH); 
  }
  else if (i==4){
     digitalWrite(PC2, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(PC11, HIGH);
     digitalWrite(5, HIGH);
  }
  else if (i==5){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC2, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
  }
  else if (i==6){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC2, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(2, HIGH);
  }
  else if (i==7){
     digitalWrite(PC1, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(PC11, HIGH);
  }
  else if (i==8){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC2, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(PC11, HIGH);
  }
  else if (i==9){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC2, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(PC11, HIGH);
     digitalWrite(5, HIGH);
  }
  else if (i==0){
     digitalWrite(PC1, HIGH);
     digitalWrite(PC2, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(PC11, HIGH);
  }
}
void onpin(int j){
  if (j==1){
    digitalWrite(PC3, HIGH);
    digitalWrite(PC10, HIGH);
  }
  else if (j==2){
    digitalWrite(PC0, HIGH);
    digitalWrite(PC10, HIGH);
  }
  else if (j==3){
    digitalWrite(PC0, HIGH);
    digitalWrite(PC3, HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  i=0;
  for (j=7; j<15; j++){
    if(digitalRead(j)==HIGH){
      i=i+pow(2, (j-7));
      delay(2.5);
      for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
      }
      digitalWrite(PC0, LOW);
      digitalWrite(PC1, LOW);
      digitalWrite(PC2, LOW);
      digitalWrite(PC3, LOW);
      digitalWrite(PC10, LOW);
      digitalWrite(PC11, LOW);
      }
  }
  if (i<10){
    onled(i);
    onpin(1);
  }
  else if (i<100){
    
    onled(i/10);
    onpin(1);
    delay(2.5);
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    digitalWrite(PC0, LOW);
    digitalWrite(PC1, LOW);
    digitalWrite(PC2, LOW);
    digitalWrite(PC3, LOW);
    digitalWrite(PC10, LOW);
    digitalWrite(PC11, LOW);
    onled(i%10);
    onpin(2);
    delay(2.5);
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    digitalWrite(PC0, LOW);
    digitalWrite(PC1, LOW);
    digitalWrite(PC2, LOW);
    digitalWrite(PC3, LOW);
    digitalWrite(PC10, LOW);
    digitalWrite(PC11, LOW);
    
  }
  else{

    onled(i/100);
    onpin(1);
    delay(2.5);
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    digitalWrite(PC0, LOW);
    digitalWrite(PC1, LOW);
    digitalWrite(PC2, LOW);
    digitalWrite(PC3, LOW);
    digitalWrite(PC10, LOW);
    digitalWrite(PC11, LOW);
    onled((i/10)%10);
    onpin(2);
    delay(2.5);
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    digitalWrite(PC0, LOW);
    digitalWrite(PC1, LOW);
    digitalWrite(PC2, LOW);
    digitalWrite(PC3, LOW);
    digitalWrite(PC10, LOW);
    digitalWrite(PC11, LOW);
    onled(i%10);
    onpin(3);
    delay(2.5);
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
    }
    digitalWrite(PC0, LOW);
    digitalWrite(PC1, LOW);
    digitalWrite(PC2, LOW);
    digitalWrite(PC3, LOW);
    digitalWrite(PC10, LOW);
    digitalWrite(PC11, LOW);
    
  }
}
