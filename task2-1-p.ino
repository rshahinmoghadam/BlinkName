const pin_t MY_LED = D7;
int Push_Button = D6;

SYSTEM_THREAD(ENABLED);


void setup() {

pinMode(MY_LED, OUTPUT);
pinMode(Push_Button, INPUT_PULLUP);

}

void loop() {
 
    int buttonState = digitalRead(Push_Button);

  if(buttonState == HIGH)
  { 
    
     digitalWrite(MY_LED, HIGH);
     delay(1s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     digitalWrite(MY_LED, HIGH);
     delay(5s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     digitalWrite(MY_LED, HIGH);
     delay(1s);
     digitalWrite(MY_LED, LOW);
     delay(1s);

     
     
    
     digitalWrite(MY_LED, HIGH);
     delay(1s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     digitalWrite(MY_LED, HIGH);
     delay(3s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     
     
     digitalWrite(MY_LED, HIGH);
     delay(3s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     digitalWrite(MY_LED, HIGH);
     delay(3s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     
     
     
     digitalWrite(MY_LED, HIGH);
     delay(1s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     digitalWrite(MY_LED, HIGH);
     delay(1s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     
     
     digitalWrite(MY_LED, HIGH);
     delay(3s);
     digitalWrite(MY_LED, LOW);
     delay(1s);
     digitalWrite(MY_LED, HIGH);
     delay(1s);
     digitalWrite(MY_LED, LOW);
     
    
    
  }


}