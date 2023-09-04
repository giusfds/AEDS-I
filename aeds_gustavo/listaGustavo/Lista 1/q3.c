#include <stdio.h>
#define PI 3.14159265358979323846

int main() {

    double raio=3, altura=4, volume = 0;

    // V = (PI * r^2 * h) 3

    volume = (PI * pow(raio, 2) * altura)/3;

    printf("volume=%.2lf\n", volume);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}