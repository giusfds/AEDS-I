#include <stdio.h>

void lerTresValores(int valores[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Digite o %d valor inteiro: ", i);
        scanf("%d", &valores[i]);
    }
}

void ordemDecrescente(int valores[3]) {
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (valores[i] < valores[j]) {
                temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }
}

int main() {
    int valores[3];
    lerTresValores(valores);
    ordemDecrescente(valores);
    printf("Valores em ordem decrescente: %d, %d, %d\n", valores[0], valores[1], valores[2]);

    return 0;
}
