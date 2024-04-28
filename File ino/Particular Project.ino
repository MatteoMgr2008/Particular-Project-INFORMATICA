int numeroprimo=1;

void setup() {
    Serial.begin(9600);
    Serial.println("Ecco tutta la lista dei numeri primi:");
    while(true){
        int infinito=numeroprimo+1;
        
        if (isPrime(infinito)) {
            Serial.print("Il numero ");
            Serial.print(infinito);
            Serial.println(" e' un numero primo");
            delay(300);
        }
        if (infinito<1) {
            break;        
        }
        numeroprimo++;
    }
}

void loop() {
    
}

bool isPrime(int numero) {
    if (numero<=1) {
        return false;    
    }
    for(int i=2; i<=numero/2; ++i){
        if (numero%i == 0) {
            return false;        
        }        
    }
    return true;
}