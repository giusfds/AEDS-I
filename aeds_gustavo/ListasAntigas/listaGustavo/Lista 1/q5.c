#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846


int main() {

    double a = 7.61, b = 3.84, c = 2.92;

    double volume = (4.0 / 3.0) * PI * a * b * c;

    printf("O volume do elipsoide com a = %.2lf, b = %.2lf e c = %.2lf é %.2lf\n", a, b, c, volume);

    return 0;
}