
//Attiny85 Viabration Alarm | Bike Security

// ATMEL ATTINY45 / ARDUINO
//
//                  +-\/-+
// Ain0 (D 5) PB5  1|    |8  Vcc
// Ain3 (D 3) PB3  2|    |7  PB2 (D 2)  Ain1
// Ain2 (D 4) PB4  3|    |6  PB1 (D 1) pwm1
//            GND  4|    |5  PB0 (D 0) pwm0
//  
int Buzz = 3;
int vs =2; // vibration sensor
int i=0;
void setup(){
  pinMode(Buzz, OUTPUT);
  pinMode(vs, INPUT); 
}
void loop(){
int vib = digitalRead(vs);
  if(vib == HIGH)
  {
    for(i=0;i<10;i++)
    {
    digitalWrite(Buzz, HIGH);
    delay(500);
    digitalWrite(Buzz, LOW); 
    delay(100);
  }
  }
  else{
    digitalWrite(Buzz, LOW); 
  }
}
