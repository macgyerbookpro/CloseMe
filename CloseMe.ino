/*
  CloseMe 2.0  
*/

#define LED_PIN 3
#define BEEP_PIN 0

#define DOOR_OPEN_TOO_LONG 20000
#define BEEP_1 100

// the setup function runs once when you press reset or power the board
void setup() {
  
  
  pinMode(BEEP_PIN, OUTPUT);
  digitalWrite(BEEP_PIN, HIGH);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  delay(DOOR_OPEN_TOO_LONG);//door is open, allow normal usage 
}


byte count = 0;
// the loop function runs over and over again forever
void loop() {
  byte i;
  if(count < 100){
    for(i = 0; i < count ; i++){
      beep(BEEP_1);
    } 
    count++;
    delay(2000);
  }
}

void beep(byte length){
  digitalWrite(BEEP_PIN, LOW);
  delay(length);
  digitalWrite(BEEP_PIN, HIGH);
  delay(length);
}

