#include <stdio.h>

int main() {
    int aux=0;

    for (int i = 5; i < 30; i+=5)
    {
        aux+=i;
    }
    
    printf("%d\n",aux);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}