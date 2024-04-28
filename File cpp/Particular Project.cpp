#include <iostream>
#include <chrono>
#include <thread>

bool isPrime(int numero);

int main() {
    int numeroprimo=1;

    std::cout <<"Ecco tutta la lista dei numeri primi:"<< std::endl;
    while (true) {
        int infinito=numeroprimo+1;

        if (isPrime(infinito)) {
            std::cout <<"Il numero "<< infinito <<" e' un numero primo"<< std::endl;
        }
        if (infinito<1) {
            break;
        }
        numeroprimo++;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}

bool isPrime(int numero) {
    if (numero<=1) {
        return false;
    }
    for (int i=2; i<=numero/2; ++i) {
        if (numero%i == 0) {
            return false;
        }
    }
    return true;
}