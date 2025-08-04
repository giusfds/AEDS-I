#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 03");

    double cateto1=0.0, cateto2=0.0, hipotenusa=0.0, area=0.0, perimetro=0.0, angulo1=0.0, angulo2=0.0;

    cateto1 = readdouble("Digite o valor do primeiro cateto: ");
    cateto2 = readdouble("Digite o valor do segundo cateto: ");

    //hipotenusa
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    //área
    area = (cateto1 * cateto2) / 2;

    //perímetro
    perimetro = cateto1 + cateto2 + hipotenusa;

    //angulos
    angulo1 = atan(cateto2 / cateto1) * (180 / PI);
    angulo2 = 90 - angulo1;

    
    printf("\nHipotenusa: %.2f\n", hipotenusa);
    printf("area: %.2lf\n", area);
    printf("Perimetro: %.2lf\n", perimetro);
    printf("angulo adjacente ao primeiro cateto: %.2lf graus\n", angulo1);
    printf("angulo adjacente ao segundo cateto: %.2lf graus\n", angulo2);
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}

