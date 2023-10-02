#include <stdio.h>

void menu(){
    int opcao = 0;

    printf("--------- | MENU | ---------\n\n");
    printf("1 - Opcao 1\n");
    printf("2 - Opcao 2\n");
    printf("3 - Opcao 3\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);
}

int main() {

    menu();

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}