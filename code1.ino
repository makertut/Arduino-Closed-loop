int stepPin = 5;
int dirPin  = 6;
int  enPin  = 7;
 
int numstep = 1030;
unsigned long ldelay = 100;
unsigned long mDelay = 500;

void setup() {
  // put your setup code here, to run once:
    
     pinMode(stepPin,OUTPUT);

     pinMode(dirPin,OUTPUT);

     pinMode(enPin , OUTPUT);

     digitalWrite(dirPin, HIGH);
     digitalWrite( enPin , LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int x = 0; x < numstep; x++) {

           digitalWrite(stepPin,HIGH);

           delayMicroseconds(ldelay);

           digitalWrite(stepPin,LOW);

           delayMicroseconds(ldelay);

        }

    delay(mDelay);
    digitalWrite(dirPin, LOW);

    for(int x = 0; x < numstep; x++) {

           digitalWrite(stepPin,HIGH);

           delayMicroseconds(ldelay);

           digitalWrite(stepPin,LOW);

           delayMicroseconds(ldelay);

        }

    delay(mDelay);
    digitalWrite(dirPin, HIGH);
    
}
