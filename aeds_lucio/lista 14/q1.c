#include <stdio.h>

void troca(int *x, int *y){    
    int aux;    
    aux= *x;    // aux e igual a x  
    *x = *y;    // x aponta para y
    *y = aux;   // y e o msm valor de aux, ou seja   X
}

int main() {

    int a=5,b=2;     
    troca(&a, &b);     
    printf("\n%i, %i", a, b);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}