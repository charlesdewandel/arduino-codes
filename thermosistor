/* 
   Thermistor with Arduino
   This code will print the temperature in your serial monitor and if it is too hot ( more than 22°c ) will turn on a LED
*/
int p_led = 2;
int ThermistorPin = 0;
int Vo;
float R1 = 1000;   // Resistor Value (We use 1 KOhms Resistor)
float logR2, R2, T, Tc, Tf;
float A = 1.009249522e-03, B = 2.378405444e-04, C = 2.019202697e-07;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (A + B*logR2 + C*logR2*logR2*logR2));
  Tc = T - 273.15;
  Tf = (Tc * 9.0)/ 5.0 + 32.0; 
  
  Serial.print("Temperature: "); 
  Serial.print(Tc);
  Serial.print(" C; ");
  Serial.print(Tf);
  Serial.println(" F");   
  if(Tc > 22){
    digitalWrite(p_led, HIGH);
    Serial.print("ok");
    }
  delay(500);
}
