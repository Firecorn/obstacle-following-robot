void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A2,INPUT);
  pinMode(A4,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ir_right= analogRead(A2);
  int ir_left=  analogRead(A4);
  Serial.println("ir_a2 = "+String(ir_right));
  Serial.println("ir_left ="+String(ir_left));
  delay(1000);
  if(ir_right<1000 && ir_left<900){ //forward
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
  if(ir_right>1000 && ir_left<900){//left
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
  if(ir_right<1000 && ir_left>900){//right
     digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
  if(ir_right>1000 && ir_left>900){//stop
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
  }
}
