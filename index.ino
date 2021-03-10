int R = 2;
int G = 1;
int B = 0;
int terra = 3;
int tempo = 300;
int entrada = 8; 
int entradaSinal = 10; 

void setup() {
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(terra, OUTPUT);
    digitalWrite(terra, LOW);
    
    pinMode(entradaSinal, OUTPUT);
    pinMode(entrada, INPUT);
    digitalWrite(entradaSinal, HIGH);     
}

void loop(){
    delay(tempo);

    brilharVermelho(); 
    brilharBranco();
    delay(tempo);

    brilharVerde();
    brilharBranco();
    delay(tempo);

    brilharAzul();
    brilharBranco();      
    delay(tempo);

    brilharVioleta();
    brilharBranco();      
    delay(tempo);

    brilharAnis();
    brilharBranco();      
    delay(tempo);

    brilharAmarelo();
    brilharBranco();      
    delay(tempo);
}

void brilharBranco() {
    if (digitalRead(entrada) ) {
      digitalWrite(R, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(B, HIGH);
    } 
}

void brilharVermelho() {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
}

void brilharVerde() {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
}

void brilharAzul() {
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
}

void brilharAmarelo() {
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
}

void brilharAnis() {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
}

void brilharVioleta() {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
}
