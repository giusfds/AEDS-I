#include "Giuseppe.h"
#define MAX 10

int determinant(int matrix[MAX][MAX], int n) {
    int det = 0, submatrix[MAX][MAX];

    if (n == 1) {
        return matrix[0][0];
    } else if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } else {
        for (int k = 0; k < n; k++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == k)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += (k % 2 == 0 ? 1 : -1) * matrix[0][k] * determinant(submatrix, n - 1);
        }
    }
    return det;
}

void printDiagonal(int matrix[MAX][MAX], int n) {
    printf("Diagonal Principal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}

int main() {
    clear();
    id("exercicio 8");
    int n;
    int matrix[MAX][MAX];

    printf("Digite o valor de n (dimensão da matriz): ");
    scanf("%d", &n);

    if (n > MAX || n < 1) {
        printf("Valor de n inválido. Deve ser entre 1 e %d.\n", MAX);
        return 1;
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, n);
    printf("Determinante: %d\n", det);

    printDiagonal(matrix, n);

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}
