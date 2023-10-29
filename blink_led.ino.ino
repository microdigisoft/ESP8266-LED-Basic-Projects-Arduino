#define ledPin1 2 /* LED connected to GPIO 2 */
#define ledPin2 16 /* LED connected to GPIO 16 */



void setup()
{
  Serial.begin(9600);  /* initialise serial communication */
  Serial.println("Microdigisoft");
   delay(1000);
 pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT); 
}

void loop()
{
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  Serial.println("GPIO16 LED ON");
  delay(1000);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  Serial.println("GPIO2 LED ON"); 
  delay(1000);
}
