#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 02");

    double areaBase=0.0, altura=0.0;

    areaBase = readdouble("qual e a area da base que vc quer: ");

    double lado = areaBase/4;

    altura = readdouble("qual e a altura da piramede: ");

    // para calcular o volume, a formula e: V= 1/3L * L * H

    double volume=0, tercoLado=0; 

    tercoLado= lado/3; // representa o 1/3L
    volume = tercoLado * lado * altura; //volume

    double areaTot=0.0, areaTriangulo=0.0;

    areaTriangulo = (areaBase * altura)/2;

    areaTot = (4 * areaTriangulo) + areaBase;

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}