#include <IRremote.h>
 
 
// Create IR Send Object
IRsend irsend;
 
void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(1);
}

//B91E4719
//UNKNOWN
//FFFFFFFF
//NEC
//FFFFFFFF
//NEC
//FFFFFFFF
//NEC
//CF8976
//NEC
//FFFFFFFF
//NEC
//FFFFFFFF
//NEC

int current_h_count;
int prev_h_count;
void loop() {
  while (Serial.available())
  { 
    current_h_count = Serial.readString().toInt();

    if (current_h_count > 1 && prev_h_count < 1) {
      Serial.println("works");
      irsend.sendNEC(0xCF8976, 32); 
    }
    prev_h_count = current_h_count;
  }
    
  // Add a small delay before repeating
  delay(200);

} 
