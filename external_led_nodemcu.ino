#define LED1 D0 //Led in NodeMCU at pin D1
#define LED2 D4 //Led in NodeMCU at pin D2 

void setup() 
{
 pinMode(LED1, OUTPUT);   //LED1 D1 pin as output 
 pinMode(LED2, OUTPUT);   //LED2 D5 pin as output 
}
 void loop() // runs/loops below code infinitely
{
 digitalWrite(LED1, HIGH); //turn on LED
 delay(300); 
 digitalWrite(LED1, LOW); //turn off LED
 delay(300);
 digitalWrite(LED2, HIGH); //turn on LED
 delay(300);            
 digitalWrite(LED2, LOW); //turn off LED
 delay(300); 

}
