#include "io.h"
#define PI 3.14159265358979323846

double calcular_h(double volume) {
    double h = pow((4/3*PI/volume), 1/3);
    return h;
}

int main() {

    double volumeEsfera;
    printf("qual e o volume da esfera que vc quer colocar\n");
    scanf("%lf", &volumeEsfera);
    double raio;
    raio = calcular_h(volumeEsfera);
    printf("%.2lf\n", raio);

    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}