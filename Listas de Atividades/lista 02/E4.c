#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 4");

    double altura=0, peso=0, IMC=0;

    altura = readdouble("qual e a sua altura: ");
    peso = readdouble("qual seu peso: ");

    IMC = peso/altura;

    if (IMC < 16)
    {
        printf("Hecticidade morbida\n");
    }else if ((IMC <= 16.1) OR (IMC >=17))
    {
        printf("Hecticidade grave\n");
    }else if ((IMC <= 17.1) OR (IMC >=18.5))
    {
        printf("Abaixo do peso\n");
    }else if ((IMC<= 18.6) OR (IMC >= 25))
    {
        printf("Peso normal\n");
    }else if ((IMC <= 25.1) OR (IMC >= 30))
    {
        printf("Sobrepeso\n");
    }else if ((IMC <= 30.1) OR (IMC >= 35))
    {
        printf("Obesidade\n");
    }else if ((IMC <= 35.1) OR (IMC >= 40))
    {
        printf("Obesidade grave\n");
    }else
    {
        printf("Obesidade mórbida\n");
    }
    
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}