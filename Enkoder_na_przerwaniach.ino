// Obsługa enkodera dla wybierania opcji dla poszczególnych programów
// Przy szybkim obracaniu gubi kroki   
#define enkodera 2 
#define enkoderb 4 
#define Przycisk 5
unsigned long time = 0; 
long ileenkoder = 0; 
long licznik = 0;
 byte ile=0;
void setup()
{
 Serial.begin(9600);
 
 pinMode(enkodera,INPUT_PULLUP);
pinMode(enkoderb,INPUT_PULLUP);
pinMode(Przycisk,INPUT_PULLUP);
 
 attachInterrupt(0, Enkoder, FALLING); 
 
 
 time = millis(); 
}

byte Enkoder(){
  if(digitalRead(enkoderb)){
  if(ileenkoder==0)
  ileenkoder=1;
  ileenkoder--;
  }
  else{
  if(ileenkoder==9)
  ileenkoder=8;
  ileenkoder++;
  }
  Serial.println(ileenkoder);
  
}
void jeden(String NazwaDrinka,unsigned long plyn1,unsigned long plyn2,unsigned long plyn3,unsigned long plyn4, byte Procenty)
{
Serial.println(NazwaDrinka);
Serial.println(plyn1);
Serial.println(plyn2);
Serial.println(plyn3);
Serial.println(plyn4);
Serial.println(Procenty);
}
 
void loop()
{
  
ile=2;
Serial.println(ile);
switch(ile){
  
case 5:

Serial.println("Bladdd");
while(digitalRead(Przycisk)==HIGH);
delay(20);
      break;

case 1:
Serial.println("Dziala1");

       break;
case 2:
Serial.println("Dziala2");

while(digitalRead(Przycisk)==HIGH);
delay(20);
       break;
case 3:
Serial.println(ileenkoder);
      break;
       
default:
      break;
  }
}
