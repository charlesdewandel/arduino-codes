int currentButtonState; // the current state of button
int i = 0;

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(LED_PIN_1, OUTPUT); 
  pinMode(LED_PIN_2, OUTPUT); // set arduino pin to output mode

  currentButtonState = digitalRead(BUTTON_PIN);
}

void loop() {
  lastButtonState    = currentButtonState;      // save the last state
  currentButtonState = digitalRead(BUTTON_PIN); // read new state
  Serial.println(i); 
  if(lastButtonState == HIGH && currentButtonState == LOW) {
    
    
    i++ ;
    // toggle state of LED
    ledState = !ledState;
  
    // control LED arccoding to the toggled state
    
  }
  if(i == 1){
    digitalWrite(LED_PIN_1, HIGH); 
  }
  else if(i == 2){
    digitalWrite(LED_PIN_2, HIGH); 
  }
  else{
     Serial.println("cest fini");
     digitalWrite(LED_PIN_1, LOW);
     digitalWrite(LED_PIN_2, LOW); 
     i = 0 ;
   }
}
