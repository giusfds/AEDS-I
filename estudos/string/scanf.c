#include <stdio.h>

int main() {
    char nome[100];
    printf("Digite seu nome completo: ");
    scanf("%[^\n]s", nome);

    printf("%s\n", nome);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}