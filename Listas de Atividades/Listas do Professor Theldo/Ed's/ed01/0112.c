#include <stdio.h>

int main() {

    double lado=0;
    printf("qual e o lado que vc quer colocar ai\n");
    scanf("%lf", &lado);

    if (lado > 0)
    {
        float umTerco=0;
        umTerco = lado/3;

        double novoArea=0;
        novoArea = umTerco * umTerco;
        // 1|3 area do quadrado 

        double perimetro=0;
        perimetro = umTerco * 4;

        printf("area: %lf\n", novoArea);
        printf("perimetro: %lf\n", perimetro);  
    }else
    {
        printf("o valor e negativo ou igual a 0\n");
    }


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}