#include <stdio.h>
#include <locale.h>

int main() {

    int idadeF=0 , idadeM=0, generoM=0, generoF=0, genero=0, auxIdadeF=0, 
    mediaIdadeF=0, auxIdadeH=0, mediaIdadeGeral=0, somaGeral=0;

    double pesoF=0, pesoH=0, auxpesoH=0, auxpesoF=0, mediaPesoHomem=0, 
    mediaPesoGeral=0, somaPesoGeral=0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Qual é o seu gênero? (masc=1/fem=2)\n");
        scanf("%d", &genero);
        getchar();

        if (genero == 1)
        {
            /* homem */
            generoM++;

            printf("Qual é o seu peso?\n");
            scanf("%lf", &pesoH);
            getchar();
            auxpesoH += pesoH;

            // idade dos homens 
            printf("Qual é a sua idade?\n");
            scanf("%d", &idadeM);
            getchar();
            auxIdadeH += idadeM;

        }
        else if (genero == 2)
        {
            /* mulher */
            generoF++;
            printf("Qual é o seu peso?\n");
            scanf("%lf", &pesoF);
            getchar();
            auxpesoF += pesoF;

            // idade das mulheres
            printf("Qual é a sua idade?\n");
            scanf("%d", &idadeF);
            getchar();
            auxIdadeF += idadeF;
        }
    }

    // O número de homens e o número de mulheres;
    printf("O número de homens é: %d  e o número de mulheres é: %d\n", generoM, generoF);

    // A média dos pesos dos homens;
    mediaPesoHomem = auxpesoH / generoM;
    printf("A média do peso dos homens é %.2lf\n", mediaPesoHomem);

    // A média das idades das mulheres;
    mediaIdadeF = auxIdadeF / generoF;
    printf("A média da idade das mulheres é %d\n", mediaIdadeF);

    // A média do peso e das idades do grupo;
    somaGeral = auxIdadeF + auxIdadeH;
    mediaIdadeGeral = somaGeral / (generoM + generoF);
    printf("A média de idade do grupo é de: %d\n", mediaIdadeGeral);

    somaPesoGeral = auxpesoF + auxpesoH;
    mediaPesoGeral = somaPesoGeral / (generoM + generoF);
    printf("A média de peso do grupo é de: %.2lf\n", mediaPesoGeral);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
