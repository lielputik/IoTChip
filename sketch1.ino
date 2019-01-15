#define nRST 3
#define LORA_RST 6
#define GPS_nRST 7
#define LED1 15
#define LED2 11
#define LED3 13
#define BAT_OK 14
#define GPS_RX 17
#define GPS_TX 18
#define COMP_SPEED 115200


void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
//    pinMode(nRST, INPUT);
//    pinMode(LORA_RST, OUTPUT);
//    pinMode(GPS_nRST, OUTPUT);
    pinMode(LED1, OUTPUT);
//    pinMode(LED2, OUTPUT);
//    pinMode(LED3, OUTPUT);
//    pinMode(BAT_OK, INPUT);
    Serial.begin(COMP_SPEED);
    Serial.println("Setup done");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("LED ON");
  delay(1000);                  // wait for a second
  digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("LED OFF");
  delay(1000);                  // wait for a second

}
