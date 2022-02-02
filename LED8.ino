int led[4] = {3,5,6,9};
int swpwm = A0;
int val = 0;

void setup() {
  Serial.begin(9600);
  for(int k=0;k<=3;k++){
    pinMode(led[k],OUTPUT);
  }
   
}

void loop() {

for(int i=0;i<=3;i++){
  for(int j=0;j<=100;j++){
  analogWrite(led[i],j);
  Serial.print("LED SET ");
  Serial.print(i+1);
  Serial.print(":");
  Serial.println(j);
  delay(100);
  }
}

for(int i=0;i<=3;i++){
  for(int j=100;j>=0;j--){
  analogWrite(led[i],j);
  Serial.print("LED SET ");
  Serial.print(i+1);
  Serial.print(":");
  Serial.println(j);
  delay(100);
  }
}
for(int p=0;p<=3;p++){
  digitalWrite(led[p],LOW);
}
delay(500);
for(int i=3;i>=0;i--){
  for(int j=0;j<=100;j++){
  analogWrite(led[i],j);
  Serial.print("LED SET ");
  Serial.print(i+1);
  Serial.print(":");
  Serial.println(j);
  delay(100);
  }
}

for(int i=3;i>=0;i--){
  for(int j=100;j>=0;j--){
  analogWrite(led[i],j);
  Serial.print("LED SET ");
  Serial.print(i+1);
  Serial.print(":");
  Serial.println(j);
  delay(100);
  }
}



delay(500);
for(int m=0;m<=100;m++){
  analogWrite(led[0],m);
  analogWrite(led[1],m);
  analogWrite(led[2],m);
  analogWrite(led[3],m);
  Serial.print("ALL LED");
  Serial.print(": ");
  Serial.println(m);
  delay(150);
}
for(int n=100;n>=0;n--){
  analogWrite(led[0],n);
  analogWrite(led[1],n);
  analogWrite(led[2],n);
  analogWrite(led[3],n);
  Serial.print("ALL LED");
  Serial.print(": ");
  Serial.println(n);
  delay(100);
}






for(int p=0;p<=3;p++){
  digitalWrite(led[p],LOW);
}
delay(500);


//for(int i=0;i<=100;i++){
//  analogWrite(led[2],i);
//  Serial.println(int(i));
//  delay(100);
//}

}
