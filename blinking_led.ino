int LED = 12;
void setup() {
pinMode(LED, OUTPUT);
}

void loop() {
blink(200); blink(200); blink(200); //S
delay(300); //Delay between letters
blink(500); blink(500); blink(500); //O
delay(300); //delay between letters
blink(200); blink(200); blink(200); //S
delay(1000); // 1 second delay at the end to seperate SOS's
  
}

void blink(int duration){
  digitalWrite(LED,HIGH);
  delay(duration);
  digitalWrite(LED,LOW);
  delay(duration);
}
