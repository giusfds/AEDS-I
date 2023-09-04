#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main() {

    // 4/3*PIr^2

    double raio= 7.453, area;

    area = 4/3 * PI * pow(raio, 2);

    printf("area=%.2lf\n", area);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}