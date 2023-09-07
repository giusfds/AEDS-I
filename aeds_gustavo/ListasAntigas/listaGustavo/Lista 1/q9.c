#include <stdio.h>

int main() {

    double numero[5], soma, media;

    for (int i = 0; i < 5; i++)
    {
        printf("qual e o numero %d que vcq quer ler\n",i+1);
        scanf("%lf", &numero[i]);
        soma += numero[i]; 
    }

    media = soma/5;

    printf("a media dos numeros e %.2lf\n", media); 

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}