#include <stdio.h>


double calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    getchar();
    
    if (numero < 0) {
        printf("O nemero deve ser positivo.\n");
    } else {
        double fatorial = calcularFatorial(numero);
        printf("O fatorial de %d e: %.2lf\n", numero, fatorial);
    }
    
    return 0;
}
