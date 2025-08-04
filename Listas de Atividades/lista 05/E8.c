#include "Giuseppe.h"

void imprimirTriangulo(int n) {
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
        imprimirTriangulo(n - 1);
    }
}

int main() {

    clear();
    id("exercicio 8");

    int n; 
    printf("digite a quantidade de linhas da piramide\n");
    scanf("%d", &n);
    
    printf("\n");
    printf("\n");
    imprimirTriangulo(n);

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}