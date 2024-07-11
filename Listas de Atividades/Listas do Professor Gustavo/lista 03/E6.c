#include "Giuseppe.h"

int mdc(int a, int b) {
    int aux;
    while (b != 0) {
        aux = a % b;
        a = b;
        b = aux;
    }
    return a;
}

int main() {

    clear();
    id("exercicio 6");

    int numero1=0, numero2=0, maxdc=0;

    numero1 = readint("qual e o primeri numero que vc quer usar:");
    numero2 = readint("qual e o segundo numero que vc quer usar:");

    maxdc = mdc(numero1, numero2);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}