#include "io.h"
#define PI 3.14159265358979323846

int main() {

    double raio;
    printf("quel e o raio que vc quer colocar\n");
    scanf("%lf", &raio);

    double raio8, raiox3;
    raio8 = raio/8;
    raiox3 = raio8 * 3;

    double volume;
    volume = 4/3 * PI * (pow(raio, 3));

    printf("o valor do volume do circulo em 3/8 e %.2lf\n", volume);

    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}