#define nRST 3
#define LORA_RST 6
#define GPS_nRST 7
#define LED1 9
#define LED2 11
#define LED3 13
#define BAT_OK 14
#define GPS_RX 17
#define GPS_TX 18


void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
    pinMode(nRST, INPUT);
    pinMode(LORA_RST, OUTPUT);
    pinMode(GPS_nRST, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(BAT_OK, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
