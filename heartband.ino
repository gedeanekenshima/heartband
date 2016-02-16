// Declara pinos Vcc
int power[]={2,3,4,5,6,7};

// Declara pinos GND
int gnd[]={8,9,10,11,12,13,14};    
void setup() {
  // put your setup code here, to run once:
  // declara powerpins como saida
  for (int i=0;i<6;i++){
  pinMode(power[i],OUTPUT);
  }
  for(int i=0;i<7;i++){
    pinMode(gnd[i],OUTPUT);
    digitalWrite(gnd[i],HIGH);
  }
}

void loop() {
  for(int i=0;i<3;i++){
  // acende led central e depois os outros
  digitalWrite(power[2],HIGH);
  digitalWrite(gnd[3],LOW);
  delay(100);
  digitalWrite(power[1],HIGH);
  digitalWrite(gnd[2],LOW);  
  delay(100);
  digitalWrite(power[3],HIGH);
  digitalWrite(gnd[4],LOW);
  delay(100);
  digitalWrite(power[4],HIGH);
  digitalWrite(gnd[5],LOW);
  delay(100);
  digitalWrite(power[1],HIGH);
  digitalWrite(gnd[1],LOW);
  delay(100);
  digitalWrite(power[0],HIGH);
  digitalWrite(gnd[0],LOW);
  delay(100);
  digitalWrite(power[5],HIGH);
  digitalWrite(gnd[6],LOW);
  delay(100);
   
  // apaga LEDS
  digitalWrite(power[5],LOW);
  digitalWrite(gnd[6],HIGH);
  delay(100);
  digitalWrite(power[0],LOW);
  digitalWrite(gnd[0],HIGH);    
  delay(100);
  digitalWrite(power[1],LOW);
  digitalWrite(gnd[1],HIGH);   
  delay(100);
  digitalWrite(power[4],LOW);
  digitalWrite(gnd[5],HIGH); 
  delay(100);
  digitalWrite(power[3],LOW);
  digitalWrite(gnd[4],HIGH); 
  delay(100);
  digitalWrite(power[1],LOW);
  digitalWrite(gnd[2],HIGH);                                                                                 
  delay(100);
  digitalWrite(power[2],LOW);
  digitalWrite(gnd[3],HIGH);
  delay(100);
  }
  for(int i=0;i<7;i++){
    //para toda linha Gnd loop todas as linhas Vcc
    for(int j=0;j<6;j++){
      //acender cada led
      digitalWrite(gnd[i],LOW);
      digitalWrite(power[j],HIGH);
      delay(100);
      //apagar cada led
      digitalWrite(gnd[i],HIGH);
      digitalWrite(power[j],LOW);
     delay(100);
    }
  }
  for(int i=0;i<7;i++){
    //para toda linha Gnd loop todas as linhas Vcc
    for(int j=0;j<6;j++){
      //acender cada led
      digitalWrite(gnd[i],LOW);
      digitalWrite(power[j],HIGH);
      delay(100);
      }
  }
}
