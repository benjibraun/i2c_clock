#include <Wire.h>

uint8_t hour;
uint8_t minut;
uint8_t second;
uint8_t raw_day;
uint8_t year;
String day;

String days [7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}; 

void setup() 
{
Serial.begin(115200);
}

void loop() 
{  
}
void get_timedate(){
   
}
void serial_print_timedate(){
  Serial.println("date :" + (String)year);
  Serial.println("day :" + data_to_day(raw_day));
  Serial.println("time :" + (String)year);
  Serial.println("date :" + (String)year);
}
String data_to_day (int raw_data)
{
  return days[raw_data+1];
}

