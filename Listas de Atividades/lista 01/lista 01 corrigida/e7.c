#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 7");

    float x1, x2, y1, y2;

    printf("digite as cordenadas do vetores\n");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

    float e, a , v;
    e = x1*x2 + y1*y2;
    float n1, n2;
    n1 = sqrt(x1*x1+y1*y1);
    n2 = sqrt(x2*x2+y2*y2);

    a = acos (e/(n1*n2));

    v = x1*y2 - x2*y1;

    //! printar os valores

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}