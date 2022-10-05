#include <ESP8266WiFi.h>
const char *ssids[] = {
"Mum Use This One",
"Pretty Fly for a Wi-Fi",
"I Believe Wi Can Fi",
"Tell My Wi-Fi Love Her",
"No More Mister WiFi",
"LAN Solo",
"The LAN Before Time",
"Winternet Is Coming",
"This LAN Is My LAN",
"Get Off My LAN",
"The Promised LAN",
"The LAN Down Under",
"Drive-By Wi-Fi",
"Pizza Planet",
"Never Gonna Give You Up",
"Hide Yo Kids, Hide Yo Wi-Fi",
"Loading…",
"Searching…",
"Starbucks Wi-Fi",
"Text ###-#### for Password",
"The Password Is 1234",
"Free Public Wi-Fi",
"No Free Wi-Fi Here",
"Get Your Own Damn Wi-Fi",
"Dora the Internet Explorer",
"404 Wi-Fi Unavailable",
"Test Wi-Fi Please Ignore",
"Ye Olde Internet"
"Lord of the Pings",
"Every day I’m Buffering",
"Take my Wifi, Please",
"Wifi art thou Romeo",
"Please keep it on the Download",
"Untrusted Network",
"Wifi when you can drive",
"Wi-Fi Fo Fum",
"Life in the fast LAN",
"Nacho Wifi",
"Winternet is Coming",
"Man and Wifi",
"Knock Knock",
"And Don’t Call Me Shirley",
"Pick Me!",
"Password is Popcorn",
"Fast and Curious",
"Wu-Tang Lan",
"Connection Lost",
"Not the Wifi You’re looking for",
"Access Denied",
"Wifi? Wi-not?",
"Not in Range",
"Bandwidth Together",
"Drop it like it’s a Hotspot",
"Your Wifi is not the issue",
"This One",
"The LAN of the free",
"The Internet",
"Try Again",
"Alice in WonderLAN",
"Missed Connections",
"Network Unavailable",
"Bandwidth on the Run",
"This LAN is my LAN",
"Not your Neighbor’s Wifi",
"Worlds of WonderLAN",
"You’ll Never Guess the Password",
"Connection Found",
"Declined",
"Back Away from the Wifi",
"I’m with the Bandwidth",
"My Dog Created the Password",
"Stairway to Wifi",
"Is This Your Wifi?"
};

char APssid[25];
char APpassword[10]; // leave password empty for now
int phrase;
String MYssid;
int randNumber = random(100000000, 999999999);

void setup() {
  //randomSeed(500);
  phrase = random(sizeof(ssids)/sizeof(char*));
  MYssid = ssids[phrase];
    
  //pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output

  Serial.begin(9600);

  itoa(randNumber, APpassword, 10);
  Serial.print(".");
  Serial.print("chosen ssid:");
  Serial.println(phrase);
  Serial.print("APssid:");
  Serial.println(ssids[phrase]);
  Serial.print("Password:");
  Serial.println(APpassword);
  WiFi.mode(WIFI_AP_STA);
//WiFi.softAP(APssid, APpassword);
  WiFi.softAP(ssids[phrase], APpassword);  
}

void loop() {
//  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
//  delay(1000);                      // Wait for a second
//  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
//  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
    
 // ESP.restart();
}
