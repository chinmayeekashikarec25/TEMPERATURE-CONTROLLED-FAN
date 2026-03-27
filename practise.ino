// IR SENSOR
int ir = 13;
int led = 7;
void setup(){
  Serial.begin(9600);
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
  int irvalue = digitalRead(ir);
  if(irvalue==0){
    Serial.print("object not found");
    digitalWrite(led,LOW);
  }
  else{
    Serial.print("object found");
    digitalWrite(led,HIGH);

  }
  delay(500);
}