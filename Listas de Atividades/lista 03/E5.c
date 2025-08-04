#include "Giuseppe.h"

int mdc(int num1, int num2) {
    int aux;
    while (num2 != 0) {
        aux = num1 % num2;
        num1 = num2;
        num2 = aux;
    }
    return num1;
}

int mmc(int num1, int num2) {\
    int aux=0;
    aux = (num1 * num2) / mdc(num1, num2);
    return aux;
}

int main() {

    clear();
    id("exercicio 5");

    int numero1=0, numero2=0, resultado;

    numero1 = readint("qual e o primeiro numero:");
    numero2 = readint("qual e o segundo  numero:");

    resultado = mmc(numero1, numero2);

    printf("O MMC de %d e %d, e: %d\n", numero1, numero2, resultado);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}