#include "Giuseppe.h"

int fibonacci_rec(int n, int fib1, int fib2, int i){
    if (i >= n) {
        return fib1;
    }

    int soma = fib1 + fib2;
    fib1 = fib2;
    fib2 = soma;

    return fibonacci_rec(n, fib1, fib2, ++i);
}

int fibonacci(int n){
    int i=0;
    return n==0 ? 0 : fibonacci_rec(n, 0, 1, i);

    // o codigo assim a equivalente ao if abaixo
    
    // if (n==0)
    // {
    //     return 0;
    // }else{
    //     fibonacci_rec(n, 0, 1, i);
    // }
    
}

int main() {

    clear();
    id("exercicio 9");

    int  n=0;
    printf("digite a quantidade de numeros que vc quer na sequencia\n");
    scanf("%d", &n);

    int fib = fibonacci(n);

    printf("o valor de fibonacci e: %d\n", fib);

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}