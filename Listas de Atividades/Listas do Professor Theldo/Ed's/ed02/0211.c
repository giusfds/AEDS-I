#include "io.h"

int main() {

    int numero;
    printf("qual e o numero que vc quer verificar se e par ou impar\n");
    scanf("%d", &numero);
    getchar();

    if (numero % 2 == 0)
    {
        printf("o numero escolido e par\n");
    }else
    {
        printf("o numero e impar\n");
    }
    

    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}