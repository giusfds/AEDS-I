#include "Giuseppe.h"

int** multiplicaMatrizes(int** matriz1, int m1, int n1, int** matriz2, int m2, int n2) {
    if (n1 != m2) {
        return NULL;
    }

    int** resultado = (int**)malloc(m1 * sizeof(int*));

    for (int i = 0; i < m1; i++) {
        resultado[i] = (int*)malloc(n2 * sizeof(int));
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

int main() {

    clear();
    id("exercicio 6");

    int m1 = 2, n1 = 3;
    int m2 = 3, n2 = 2;

    int** matriz1 = (int**)malloc(m1 * sizeof(int*));
    for (int i = 0; i < m1; i++) {
        matriz1[i] = (int*)malloc(n1 * sizeof(int));
    }

    int** matriz2 = (int**)malloc(m2 * sizeof(int*));
    for (int i = 0; i < m2; i++) {
        matriz2[i] = (int*)malloc(n2 * sizeof(int));
    }

    int** resultado = multiplicaMatrizes(matriz1, m1, n1, matriz2, m2, n2);

    if (resultado == NULL) {
        printf("Não é possível multiplicar as matrizes.\n");
    } else {
        printf("O produto das matrizes é:\n");
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }

    for (int i = 0; i < m1; i++) {
        free(matriz1[i]);
    }
    free(matriz1);

    for (int i = 0; i < m2; i++) {
        free(matriz2[i]);
    }
    free(matriz2);

    if (resultado != NULL) {
        for (int i = 0; i < m1; i++) {
            free(resultado[i]);
        }
        free(resultado);
    }

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}