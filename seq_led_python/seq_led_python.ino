int x;
int z;
void setup() {
  // put your setup code here, to run once:
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while (!Serial.available());
  z = Serial.readString().toInt();
  x = z%6;
  if(x=0){
  Serial.println("프로그램을 종료할까요?");
  }
  else if(x=1){
  digitalWrite(22,0);
  }
  else if(x=2){
  digitalWrite(23,0);
  }
  else if(x=3){
  digitalWrite(24,0);
  }
  else if(x=4){
  digitalWrite(25,0);
  }
  else{
  // LED off (1이 꺼짐)
  digitalWrite(22,1);
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(25,1);
  delay(1000);
  }
}
