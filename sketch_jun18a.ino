int stikalo1 = 2;
int stikalo2 = 3;
int motor = 10;
int stanjeMotorja = 4;

void setup() {
  pinMode(stikalo1,INPUT_PULLUP);
  pinMode(stikalo2,INPUT_PULLUP);
  pinMode(stanjeMotorja,INPUT_PULLUP);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(digitalRead(stikalo1) );
  if(digitalRead(stikalo1) == 0){
    if( digitalRead(stikalo2) == 0){
      if(digitalRead(stanjeMotorja) == 0){
        digitalWrite(motor,1);
      }

     }

  }if(digitalRead(stikalo1) == 1 and digitalRead(stikalo2) == 1){
    digitalWrite(motor,0);}
  }
