#include "io.h"
#define PI  3.141592653

int main() {

    double raio, metadeRaio, semiCirculo;
    printf("defina o valor do raio\n");
    scanf("%lf", &raio);

    metadeRaio = raio / 2;

    // pi r^2

    semiCirculo = ((PI * metadeRaio)/2)/2;


    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}