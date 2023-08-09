//fazer um programa que mostre o tempo de deslocamentoo de um carro 
//onde T = D/V

#include <stdio.h>

int main() {

    double tempo, distancia, velociade;

    printf("qual e a distancia percorrida pelo movel\n");
    scanf("%ld", &distancia);
    getchar();
    printf("qual e a velocidade media do movel para realizar o percurso\n");
    scanf("%lf", &velociade);
    getchar();

    tempo = distancia / velociade;

    printf("o tempo gasto para a realizacao do trajedo to movel e de %.2lf aproximadamente\n", tempo);
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}