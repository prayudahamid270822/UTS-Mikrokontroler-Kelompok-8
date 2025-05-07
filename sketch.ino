//Created Kelompok 8.
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
 lcd.init();
 lcd.backlight();
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
}

void loop(){
 //red led
 lcd.setCursor(5,0);
 lcd.println("STOP!");
 digitalWrite(2, HIGH);
 delay(11000);
 digitalWrite(2, LOW);
 lcd.clear();

//yellow led
lcd.setCursor (1,0);
lcd.println("Bersiap Maju");
 digitalWrite(3, HIGH);
 delay(1000);
 digitalWrite(3, LOW);
lcd.clear();

//green led
lcd.setCursor (6,0);
lcd.println("Maju");
digitalWrite(4, HIGH);
delay (7000);
digitalWrite(4, LOW);
delay(500);
digitalWrite(4, HIGH);
delay(500);
digitalWrite(4, LOW);
delay(500);
digitalWrite(4, HIGH);
delay(500);
digitalWrite(4, LOW);

//yellow led
lcd.setCursor (0,0);
lcd.println("Siap Untuk Berhenti");
digitalWrite(3, HIGH);
delay (1000);
digitalWrite(3, LOW);
lcd.clear();
}
