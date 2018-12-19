#define LEDR 11
#define LEDY 12
#define LEDG 13
 
void setup() {
 pinMode(LEDR, OUTPUT);
 pinMode(LEDY, OUTPUT);
 pinMode(LEDG, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  while( Serial.available() <= 0 );
  
  if ( Serial.available() >= 1 ){
    
    char received = Serial.read();
    delay(5);
    
    bool found, recognized;
    
    found = (received) & 2;
    recognized = (received) & 1;
    
    if(!found){
      digitalWrite(LEDR,HIGH);
    } else {
      digitalWrite(LEDR,LOW);
    }

    if(recognized && found){
      digitalWrite(LEDG,HIGH);       
    } else {
      digitalWrite(LEDG,LOW);
    }

    if(!recognized && found){
      digitalWrite(LEDY, HIGH);
    } else {
      digitalWrite(LEDY, LOW);
    }
  }
}
