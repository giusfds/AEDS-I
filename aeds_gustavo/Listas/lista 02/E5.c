#include "Giuseppe.h"
//screva um programa em C que leia três valores inteiros a, b e c, e 
// imprima-os em ordem crescente

int main() {

    clear();
    id("exercicio 5");

    int a=0, b=0, c=0, aux=0;
    a = readint("qual e o primeiro valor: ");
    b = readint("qual e o segundo  valor: ");
    c = readint("qual e o terceiro valor: ");

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    
    printf("%d, %d, %d\n", a, b, c);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}