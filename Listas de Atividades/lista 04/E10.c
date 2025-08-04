#include "Giuseppe.h"

int fatorial(int x){
    int fatorial = 1;
    if (x == 0){
        return 1;
    }
    for (int i = 1; i <= x; i++)
    {
        fatorial*= i;
    }
    return fatorial;
}

int comp(int linha, int coluna){
    int resultado = fatorial(linha)/(fatorial(coluna)*fatorial(linha-coluna));
    return resultado;
}

int main() {

    clear();
    id("exercicio 10");

    int n;
    int linhas; 
    int colunas;
    int numero;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (linhas = 0; linhas < n; linhas++)
    {
        for (colunas = 0; colunas <= linhas; colunas++)
        {
            numero = comp(linhas, colunas);
            printf("%d ", numero);
        }
        printf("\n");
    }
    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}