#include "Giuseppe.h"

void multiplicarMatrizes(int A[][100], int linhasA, int colunasA, int B[][100], int linhasB, int colunasB) {

    if (colunasA != linhasB) {
        printf("As matrizes não podem ser multiplicadas.\n");
        return;
    }

    int resultado[linhasA][colunasB];

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            resultado[i][j] = 0;
        }
    }

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultado:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {

    clear();
    id("exercicio 9");

    int linhasA;
    int colunasA;
    int linhasB;
    int colunasB;

    // dimensoes da matriz A
    printf("Digite o número de linhas e colunas da matriz A (linhas colunas): ");
    scanf("%d %d", &linhasA, &colunasA);

    // dimensoes da matriz B
    printf("Digite o número de linhas e colunas da matriz B (linhas colunas): ");
    scanf("%d %d", &linhasB, &colunasB);

    // Verifica se e possivel multiplicar as matrizes
    if (colunasA != linhasB) {
        printf("As matrizes não podem ser multiplicadas.\n");
        return 0;
    }

    //matriz A
    int A[100][100];
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    //matriz B
    int B[100][100];
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplicarMatrizes(A, linhasA, colunasA, B, linhasB, colunasB);

    
    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}