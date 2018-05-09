#include <SoftwareSerial>

int RELAY_PIN  = 10;
int TX_PIN = 4;
int RX_PIN = 3;
SoftwareSerial BLUE_MOD (TX_PIN,RX_PIN);
void setup()
{
pinMode(RELAY_PIN,OUTPUT);
BLUE_MOD.begin(9600)
}
void loop()
{
/*
You SHould implement your own code here to recive and manage the data and swithc the relay from the incoming HC05 Transmission 

*/
}