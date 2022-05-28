int ifread;
int wait = 50;

void setup() {
  Serial.begin(9600);  
  pinMode(A0, INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ifread = analogRead(A0);
  Serial.println(ifread);
  delay(100);
  if(ifread > 600){
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
}
