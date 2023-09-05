#include <stdio.h>

int main() {

    int x[2], y[2];

    for (int i = 0; i < 2; i++)
    {
        printf("qual e o X%d\n", i+1);
        scanf("%d", &x[i]);
        getchar();
        printf("qual e o Y%d\n", i+1);
        scanf("%d", &y[i]);
        getchar();

    }
    

    // tirar x1 de x2 e saber a distancia
    // mesma coisa com o y

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}