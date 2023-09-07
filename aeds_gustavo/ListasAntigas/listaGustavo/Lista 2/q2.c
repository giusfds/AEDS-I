#include <stdio.h>

int main() {

    int x[2], y[2], distanciaX=0, distanciaY=0;

    for (int i = 0; i < 2; i++)
    {
        printf("qual e o X%d\n", i+1);
        scanf("%d", &x[i]);
        getchar();
        printf("qual e o Y%d\n", i+1);
        scanf("%d", &y[i]);
        getchar();

    }
    
    distanciaX = x[0] - x[1];
    distanciaY = y[0] - y[1];

    printf("a distancia entre os dois pontos e [%d,%d]\n", distanciaX, distanciaY);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}