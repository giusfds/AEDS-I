#include "Giuseppe.h"

void calcularEstatisticas(int *numeros, int tamanho) {
    int soma = 0;
    double media, desvioPadrao = 0;

    //soma dos números
    for(int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    //média
    media = (double)soma / tamanho;

    // desvio padrão
    for(int i = 0; i < tamanho; i++) {
        desvioPadrao += pow(numeros[i] - media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao / tamanho);

    // Ordenando a sequência
    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = i+1; j < tamanho; j++) {
            if(numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    double mediana;
    if(tamanho % 2 == 0) {
        mediana = (numeros[tamanho / 2 - 1] + numeros[tamanho / 2]) / 2.0;
    } else {
        mediana = numeros[tamanho / 2];
    }

    int moda = numeros[0];
    int frequencia = 1;
    int maxFrequencia = 1;

    for(int i = 1; i < tamanho; i++) {
        if(numeros[i] == numeros[i-1]) {
            frequencia++;
        } else {
            if(frequencia > maxFrequencia) {
                maxFrequencia = frequencia;
                moda = numeros[i-1];
            }
            frequencia = 1;
        }
    }
    printf("Média: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);
}

int main() {

    clear();
    id("exercicio 4");

    int *numeros = NULL;
    int tamanho = 0;
    int valor;

    printf("Digite uma sequência de números naturais (digite 0 para encerrar):\n");

    while(1) {
        scanf("%d", &valor);

        if(valor == 0) {
            break;
        }

        tamanho++;
        numeros = (int *)realloc(numeros, tamanho * sizeof(int));

        numeros[tamanho - 1] = valor;
    }

    if(tamanho > 0) {
        calcularEstatisticas(numeros, tamanho);
        free(numeros); 
    } else {
        printf("Nenhum número foi inserido.\n");
    }
    

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}