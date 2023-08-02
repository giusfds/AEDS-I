#include <stdio.h>

int main() {
    double aux=1;

    for(int i=1; i <= 20; i++){
        aux=aux*i;
    }

    printf("%lf\n",aux);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}