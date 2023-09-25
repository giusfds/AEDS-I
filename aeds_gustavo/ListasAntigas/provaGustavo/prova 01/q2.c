#include <stdio.h>
#include <math.h>

int main() {

    int cateto1=0, cateto2=0;

    printf("qual e o numero do primeiro cateto\n");
    scanf("%d", &cateto1);
    getchar();
    printf("qual e o numero do segundo cateto\n");
    scanf("%d", &cateto2);
    getchar();

    double hipotenusa=0, area=0, sin=0;
    hipotenusa = sqrt((pow(cateto1, 2)) + (pow(cateto2, 2)));
    area = (cateto1 * cateto2 )/ 2;

    if (hipotenusa != 1 )
    {
        sin = cateto1 / hipotenusa;
        printf("o valor do seno e de %.2lf\n", sin);
    }

    printf("o valor da area e: %.2lf\n", area);
    printf("o valor da hiponetusa e de %.2lf\n", hipotenusa);
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}