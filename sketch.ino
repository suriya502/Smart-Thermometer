#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();
  pinMode(5, OUTPUT); }
void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  if(temp >= 35){
    lcd.setCursor(0,0);
    lcd.print("HOT AIR FLOW   ");
    lcd.setCursor(0,1);
    lcd.print("TEMP UP!       ");
    digitalWrite(5, HIGH);
    delay(300);
    digitalWrite(5, LOW);
    delay(300); }
  else{
    digitalWrite(5, LOW);
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print((char)223);
    lcd.print("C      ");
    lcd.setCursor(0,1);
    lcd.print("Humidity: ");
    lcd.print(hum);
    lcd.print("%     ");
    delay(1000); }
   }
