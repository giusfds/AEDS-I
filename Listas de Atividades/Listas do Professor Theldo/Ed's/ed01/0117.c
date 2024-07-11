#include "io.h"

int main() {

    double valor, volume, novoValor; 

    printf("qual e o valor que vc quer colocar");
    scanf("%lf", &valor);

    if (valor>0)
    {
        novoValor = valor * 7;

        volume = novoValor * 3; 

        printf("esse e o volume do cubo 7x %.2lf\n", volume);
    }else
    {
        printf("o valor e negativo ou igual a 0\n");
    }

    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}