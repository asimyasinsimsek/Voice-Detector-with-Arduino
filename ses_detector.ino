 int led1=13;
 int led2=12;
 int led3=11;
 int led4=10;
 int led5=9;
 int led6=8;
 int led7=7;
 int led8=6;
 int led9=5;
 int led10=4;
 int sensor=2;
 int voice;

void setup() {
pinMode(sensor,INPUT);
}

void loop() {
  if (digitalRead(sensor)==LOW)
   { digitalWrite(13,HIGH);
     digitalWrite(12,HIGH);
     digitalWrite(11,HIGH);
     digitalWrite(10,HIGH);
     digitalWrite(9,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(6,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(4,HIGH);
     delay(300);
     digitalWrite(13,LOW);
     digitalWrite(12,LOW);
     digitalWrite(11,LOW);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     digitalWrite(6,LOW);
     digitalWrite(5,LOW);
     digitalWrite(4,LOW);}
   


}
