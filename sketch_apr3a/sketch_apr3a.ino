#define firstrep 11
#define secondrep 10
#define thirdrep 9
#define lastrep 8


void setup() {
    Serial.begin(9600);
    pinMode(firstrep, OUTPUT);
    pinMode(secondrep, OUTPUT);
    pinMode(thirdrep, OUTPUT);
    pinMode(lastrep, OUTPUT);
}

void loop() {
  
  if (Serial.available() > 0){
    char comando = Serial.read();
    if (comando == 'A'){
      digitalWrite(firstrep, HIGH);
      digitalWrite(secondrep, LOW);
      digitalWrite(thirdrep, LOW);
      digitalWrite(lastrep, LOW);
    }
    else if(comando == 'B'){
      digitalWrite(firstrep, LOW);
      digitalWrite(secondrep, HIGH);
      digitalWrite(thirdrep, LOW);
      digitalWrite(lastrep, LOW);
    }
    else if(comando == 'C'){
      digitalWrite(firstrep, LOW);
      digitalWrite(secondrep, LOW);
      digitalWrite(thirdrep, HIGH);
      digitalWrite(lastrep, LOW);
    }
    else if(comando == 'D'){
      digitalWrite(firstrep, LOW);
      digitalWrite(secondrep, LOW);
      digitalWrite(thirdrep, LOW);
      digitalWrite(lastrep, HIGH);
    }
    else if(comando == 'D'){
      digitalWrite(firstrep, LOW);
      digitalWrite(secondrep, LOW);
      digitalWrite(thirdrep, LOW);
      digitalWrite(lastrep, LOW);
    }

  }

}