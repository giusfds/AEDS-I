#include "io.h"
#define PI 3.14159265358979323846

double method011(double area) {
    double h = sqrt(PI/area) ;
    return h;
}

int main() {

    double area;
    printf("insira o area que vc quer colocar\n");
    scanf("%lf", &area);
    //PI R^2
    double r, area3;
    area3 = area/3;
    r = method011(area3);
    
    printf("o valor de 1/3 da area e %.2ls\n", r);
    

    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}