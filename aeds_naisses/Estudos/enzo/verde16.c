#include <stdio.h>
#include <limits.h>

void main() {

    int n=0, soma=0, contmaior=0, contmenos=0;
    scanf("%d", &n);

    int vetor[n];
    int maior=INT_MIN, menor=INT_MAX;

    for(int i=0; i<n; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        vetor[i] <= 16 ? contmenos++ : contmaior++;
        maior = vetor[i] > maior ? vetor[i] : maior;
        menor = vetor[i] < menor ? vetor[i] : menor;
        
    }
    double media= soma/n;

    printf("%d\n", contmenos);
    printf("%d\n", contmaior);
    printf("%.2lf\n", media);
    printf("%d\n", menor);
    printf("%d", maior);
}