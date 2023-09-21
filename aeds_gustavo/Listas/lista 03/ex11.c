#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 11");

    double somatorio=0.0, x=0.0, resultado=0.0;
    int n=0;

    n = readint("qual e o valor de N (quanto maior o numer , maior e a aproximacao): ");
    x = readdouble("qual e o valor do logaritmo natural (Ln) que vc quer calcular: ");

    for (int i = 1; i <= n; i++)
    {
        somatorio += (pow((-1), i) * pow((-1+x), i))/i;
    }
    
    somatorio = somatorio * (-1);

    printf("o valor aproximado de Ln(%.0lf)= %.4lf\n",x, somatorio);

    // resultado 0.6931

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}