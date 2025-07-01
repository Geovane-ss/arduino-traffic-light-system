const int greenLed = 2;
const int yellowLed = 3;
const int redLed = 4;
const int buttonPin = 5;
unsigned long previousMillis = 0;
const long interval = 60000; // 1 minute interval for automatic mode
bool manualMode = false;
bool buttonPressed = false;
int countdown = 0;
void setup() {
 pinMode(greenLed, OUTPUT);
 pinMode(yellowLed, OUTPUT);
 pinMode(redLed, OUTPUT);
 pinMode(buttonPin, INPUT_PULLUP);
 Serial.begin(9600);
 digitalWrite(greenLed, HIGH);
 Serial.println("sinal aberto");
}
void loop() {
 unsigned long currentMillis = millis();
 if (digitalRead(buttonPin) == LOW) {
 buttonPressed = true;
 manualMode = true;
 countdown = 10;
 Serial.println("botão pressionado");
 delay(200); // debounce delay
 }
 if (manualMode) {
 handleManualMode();
 } else {
 if (currentMillis - previousMillis >= interval) {
 previousMillis = currentMillis;
 switchLights();
 }
 }
}
void switchLights() {
 if (digitalRead(greenLed) == HIGH) {
 digitalWrite(greenLed, LOW);
 digitalWrite(yellowLed, HIGH);
 Serial.println("sinal fechando");
 delay(2000);
 digitalWrite(yellowLed, LOW);
 digitalWrite(redLed, HIGH);
 Serial.println("sinal fechado");
 delay(15000);
 digitalWrite(redLed, LOW);
 digitalWrite(greenLed, HIGH);
 Serial.println("sinal aberto");
 }
}
void handleManualMode() {
 while (countdown >= 0) {
 Serial.print("fechando ");
 Serial.println(countdown);
 countdown--;
 delay(1000);
 }
 digitalWrite(greenLed, LOW);
 digitalWrite(yellowLed, HIGH);
 Serial.println("sinal fechando");
 delay(2000);
 digitalWrite(yellowLed, LOW);
 digitalWrite(redLed, HIGH);
 Serial.println("sinal fechado");
 for (int i = 15; i >= 0; i--) {
 Serial.print("abrindo ");
 Serial.println(i);
 delay(1000);
 }
 digitalWrite(redLed, LOW);
 digitalWrite(greenLed, HIGH);
 Serial.println("sinal aberto");
 manualMode = false;
 buttonPressed = false;
}