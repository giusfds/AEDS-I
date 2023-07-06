#include <stdio.h>

int main() {
    int i, num, produto = 1;

    printf("Digite 100 números inteiros:\n");

    for (i = 0; i < 100; i++) {
        scanf("%d", &num);
        produto *= num;
    }

    printf("O produto dos numeros é: %d\n", produto);

    return 0;
}
