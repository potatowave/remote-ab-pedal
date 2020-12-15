
const int ledPin =  0;
const int fs1 = 1;
const int relayA =  3;
const int relayB =  4;
int fs1State = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(fs1, INPUT);
  pinMode(relayA, OUTPUT);
  pinMode(relayB, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  fs1State = digitalRead(fs1);
  if (fs1State == HIGH) {     
    digitalWrite(relayA, HIGH);
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(relayA, LOW);
    digitalWrite(ledPin, LOW);
  }
}
