#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // quantidade de encomendas
    int cocadas; // quantidade de cocadas em cada encomenda
    int total_cocadas = 0; // total de cocadas

    scanf("%d", &n); // ler quantidade de encomendas

    if (n < 100) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &cocadas); // ler quantidade de cocadas em cada encomenda
            if (cocadas > 0) {
                total_cocadas += cocadas;
            }
        }

        int quilos_coco_ralado = (total_cocadas * 400) / 10000; // cálculo da quantidade de quilos de coco ralado

        printf("%d\n", quilos_coco_ralado);
    }

    return 0;
}
