const int RelePin1 = 8;  // pino ao qual o Módulo Relé está conectado
const int RelePin2 = 9;  // pino ao qual o Módulo Relé está conectado
const int RelePin3 = 10; // pino ao qual o Módulo Relé está conectado
const int RelePin4 = 11; // pino ao qual o Módulo Relé está conectado

int incomingByte;      // variavel para ler dados recebidos pela serial

void setup() {
  Serial.begin(9600); // inicializa a comunicação serial em 9600bps
  pinMode(RelePin1, OUTPUT); // seta o pino como saída
  pinMode(RelePin2, OUTPUT); // seta o pino como saída
  pinMode(RelePin3, OUTPUT); // seta o pino como saída
  pinMode(RelePin4, OUTPUT); // seta o pino como saída
  digitalWrite(RelePin1, HIGH); // seta o pino com nivel logico baixo
  digitalWrite(RelePin2, HIGH); // seta o pino com nivel logico baixo
  digitalWrite(RelePin3, HIGH); // seta o pino com nivel logico baixo
  digitalWrite(RelePin4, HIGH); // seta o pino com nivel logico baixo

}

void loop() {
  if (Serial.available() > 0) {
    // verifica se tem algum dado na serial
    incomingByte = Serial.read();  //lê o primeiro dado do buffer da serial

    if (incomingByte == '1') {     
      digitalWrite(RelePin1, LOW); 
      delay(5500);
      digitalWrite(RelePin1, HIGH);
    } 
    if (incomingByte == '2') {   
      digitalWrite(RelePin2, LOW); 
      delay(5900);  
      digitalWrite(RelePin2, HIGH);
    } 
    if (incomingByte == '3') {     
      digitalWrite(RelePin3, LOW); 
      delay(5800);
      digitalWrite(RelePin3, HIGH);
    } 
    if (incomingByte == '4') {   
      digitalWrite(RelePin4, LOW); 
      delay(6600);  
      digitalWrite(RelePin4, HIGH);
    }  
  }
}
