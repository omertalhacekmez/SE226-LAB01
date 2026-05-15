  byte ledState = LOW;
  byte lastButtonState = LOW;
  
  byte led43 = LOW;
  byte led44 = LOW;
  byte led45 = LOW;
  byte led46 = LOW;
  
  #define LED_PIN43 43
  #define LED_PIN44 44 
  #define LED_PIN45 45
  #define LED_PIN46 46
  
  #define BUTTON_PIN40 40 
  #define BUTTON_PIN41 41
  
  void setup() {
    pinMode(LED_PIN43, OUTPUT);
    pinMode(LED_PIN44, OUTPUT);
    pinMode(LED_PIN45, OUTPUT);
    pinMode(LED_PIN46, OUTPUT);
  
    pinMode(BUTTON_PIN40, INPUT);
    pinMode(BUTTON_PIN41, INPUT);
  }
  
  void loop() {
    
    byte buttonState = digitalRead(BUTTON_PIN41);
    if (buttonState == HIGH) {
      ledState = !ledState;
      digitalWrite(LED_PIN46, ledState);
    }
  
    
    byte buttonState = digitalRead(BUTTON_PIN41);
    if (buttonState != lastButtonState) {
      lastButtonState = buttonState;
      if (buttonState == LOW) {
        ledState = (ledState == HIGH) ? LOW:HIGH;
        digitalWrite(LED_PIN46, ledState);
      }
    }
    
    byte buttonState1 = digitalRead(BUTTON_PIN41);
    if (buttonState1 != lastButtonState) {
      lastButtonState = buttonState1;
      if (buttonState1 == LOW) {
        ledState = (ledState == HIGH) ? LOW:HIGH;
        digitalWrite(LED_PIN46, ledState);
        digitalWrite(LED_PIN45, ledState);
        digitalWrite(LED_PIN44, ledState);
        digitalWrite(LED_PIN43, ledState);
      }
    }
    
  
      
    }
  }
