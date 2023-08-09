//fazer um programa que mostre a distancia percorrida por um movel
//onde D = V * T

#include <stdio.h>

int main() {

    double velocidade, tempo, distancia;

    printf("qual e a velocidade media do veiculo no meio tempo\n");
    scanf("%lf", &velocidade);
    getchar();
    printf("qual e o tempo gasto pelo veiculo para realizar tal acao\n");
    scanf("%lf", &tempo);
    getchar();

    distancia = velocidade * tempo;

    printf("a distancia em questao e aproximadamente %.2lf\n", distancia);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}