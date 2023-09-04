#include <stdio.h>

int main() {

    double numero[5], soma;

    for (int i = 0; i < 5; i++)
    {
        printf("qual e o numero %d que vcq quer ler\n",i+1);
        scanf("%lf", &numero[i]);
        soma += numero[i]; 
    }

    numero[0]= soma/5;

    printf("a media dos numeros e %.2lf\n", numero[0]); 

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}