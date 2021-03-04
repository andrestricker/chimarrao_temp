// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS A3
#define LOWER_RED 4
#define UPPER_RED 3
#define GREEN 5
#define HORN 2

int min_temp=68;
int max_temp=75;

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

void setup(void)
{
  // start serial port
  Serial.begin(9600);
  
  sensors.begin();
  pinMode(LOWER_RED,OUTPUT);
  pinMode(UPPER_RED,OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(HORN, OUTPUT);
  
}


void loop(void)
{ 
  Serial.print("Requesting temperatures");
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);

  if(tempC != DEVICE_DISCONNECTED_C) 
  {
    Serial.print("Temperature for the device 1 (index 0) is: ");
    Serial.println(tempC);
    if(tempC<min_temp){
      digitalWrite(LOWER_RED, HIGH);
      digitalWrite(UPPER_RED, LOW);
      digitalWrite(GREEN, LOW);
      digitalWrite(HORN, LOW);
    } else if (tempC>max_temp) {
      digitalWrite(LOWER_RED, LOW);
      digitalWrite(UPPER_RED, HIGH);
      digitalWrite(GREEN, LOW);
      digitalWrite(HORN, LOW);
      
    } else {
      digitalWrite(LOWER_RED, LOW);
      digitalWrite(UPPER_RED, LOW);
      digitalWrite(GREEN, HIGH);
      digitalWrite(HORN, HIGH);
      delay(100);
      digitalWrite(HORN, LOW);
    }
  } 
  else
  {
    Serial.println("Error: Could not read temperature data");
    digitalWrite(LOWER_RED, HIGH);
    digitalWrite(UPPER_RED, HIGH);
    digitalWrite(GREEN, HIGH);
  }
  delay(1000);
}
