#include <stdio.h>

int main() {

    double farenheit=0, celcius=0;

    printf("qual e a temperatura que vc quer converter \n");
    scanf("%d", &celcius);

    farenheit = celcius * 1.8 + 32;

    printf("a temp e %.2lf\n", farenheit); 

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}