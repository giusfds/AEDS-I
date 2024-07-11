#include "Giuseppe.h"

// funcao presente na biblioteca como gdc
int primos(int a, int b) {
    int count=1, gcd;

    while (count <= a AND count <= b)
    {
        if (a % count == 0 AND b % count ==0)
        {
            gcd = count;
        }
        count++;
    }
    return gcd;
}

int main() {

    clear();
    id("exercicio 10");

    int num1, num2, primo;

    num1 = readint("Digite um nu'mero inteiro: ");
    num2 = readint("Digite um nu'mero inteiro: ");

    primo = primos(num1, num2);

    if(primo == 1)
    {
        printf("%d e o maior fator comum entre %d e %d", primo, num1, num2);

    }else
    {
        printf("%d e %d nao sao primos entre si.\n", num1, num2);
    }
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}