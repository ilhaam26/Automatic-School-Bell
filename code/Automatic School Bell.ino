
#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

#include <TimeLib.h>
#include <TimeAlarms.h>
#include <WiFiClient.h>

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "0.id.pool.ntp.org");

//Week Days
String weekDays[7]={"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};


char ssid[] = "xxx";      //user wifi
char pass[] = "xxx";      //password wifi


#define bel_a 26          //pin bel a
#define bel_b 27             //pin bel b


void setup() {
  Serial.begin(9600);

  pinMode(bel_a, OUTPUT);
  pinMode(bel_b, OUTPUT);
  digitalWrite(bel_a, LOW);
  digitalWrite(bel_b, LOW);
  
  // Connect to Wi-Fi
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

// Initialize a NTPClient to get time
  timeClient.begin();
  // Set offset time in seconds to adjust for your timezone, for example:
  // GMT +1 = 3600
  // GMT +8 = 28800
  // GMT -1 = -3600
  // GMT 0 = 0
  timeClient.setTimeOffset(7 * 3600);
}


void loop() {
   timeClient.update();
   
   String Hours = timeClient.getFormattedTime();
   String Day = weekDays[timeClient.getDay()];
  Serial.print("Jam: ");
  Serial.println(Hours);
  Serial.print("Hari: ");
  Serial.println(Day);

  delay(1000);

   if(Day == "Selasa","Rabu","Kamis","Jumat"){
    if(Hours == "07:00:00"){
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(3000);
      digitalWrite(bel_b, LOW);
      
      } if(Hours == "15:20:00"){
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(3000);
      digitalWrite(bel_b, LOW);
      
      } 
      
      if(Hours == "07:30:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "08:10:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "08:50:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "09:30:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "10:40:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "11:20:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "13:00:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "13:35:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "14:10:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "14:45:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 

      if(Hours == "10:10:00"){
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        delay(1500);
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        } if(Hours == "12:00:00"){
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        delay(1500);
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        }
    } if(Day == "Senin"){
    if(Hours == "06:45:00"){
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(3000);
      digitalWrite(bel_b, LOW);
      
      } if(Hours == "15:20:00"){
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(2000);
      digitalWrite(bel_b, LOW);
      delay(1500);
      digitalWrite(bel_b, HIGH);
      delay(3000);
      digitalWrite(bel_b, LOW);
      
      } 
      
      if(Hours == "07:30:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "08:10:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "08:50:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "09:30:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } if(Hours == "10:40:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "11:20:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "13:00:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "13:35:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "14:10:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 
      if(Hours == "14:45:00"){
      digitalWrite(bel_a, HIGH);
      delay(3000);
      digitalWrite(bel_a, LOW);
      } 

      if(Hours == "10:10:00"){
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        delay(1500);
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        } if(Hours == "12:00:00"){
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        delay(1500);
        digitalWrite(bel_a, HIGH);
        delay(3000);
        digitalWrite(bel_a, LOW);
        }
    } else {
      digitalWrite(bel_a,LOW);
      digitalWrite(bel_b,LOW);
      }


  
}
