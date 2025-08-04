#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");
    int n, i;
    double fib1 = 0, fib2 = 1, proxnum;

    n = readint("Digite o numero de termos da sequencia de Fibonacci: ");

    printf("Sequencia de Fibonacci:\n");
    printf("%.2lf, %.2lf \n", fib1, fib2);

    for (i = 3; i <= n; ++i) {
        proxnum = fib1 + fib2;
        printf("%.2lf, ", proxnum);
        fib1 = fib2;
        fib2 = proxnum;
    }

    pause ( "Apertar ENTER para terminar" );
    getchar();
    return 0;
}
