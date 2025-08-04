#include "Giuseppe.h"

int main() {
    
    clear();
    id("exercicio 7");

    int num, contador[4] = {0};
    float total = 0;

    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if (num == 0)
            break;

        if (num <= 1 OR num >= 100) {
            printf("Numero invalido. Digite um numero entre 1 e 100.\n");
            continue;
        }

        total++;

        if (num >= 1 AND num <= 25) {
            contador[0]++;
        } else if (num >= 26 AND num <= 50) {
            contador[1]++;
        } else if (num >= 51 AND num <= 75) {
            contador[2]++;
        } else if (num >= 76 AND num <= 100) {
            contador[3]++;
        }
    }

    printf("\nValores:\n");
    printf("intervalo [1->25]: %.2f%%\n", (contador[0] / total) * 100);
    printf("intervalo [26->50]: %.2f%%\n", (contador[1] / total) * 100);
    printf("intervalo [51->75]: %.2f%%\n", (contador[2] / total) * 100);
    printf("intervalo [76->100]: %.2f%%\n", (contador[3] / total) * 100);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}
