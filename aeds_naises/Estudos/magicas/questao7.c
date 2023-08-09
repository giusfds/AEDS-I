// fazer um programa que calcula a velocidade de deslocamento do carro Vm=D/T
// nao sei se ta certo

#include <stdio.h>

int main() {

    double distancia, tempo, velocidadeMedia;
    printf("qual e a distancia que o carro tem que andar\n");
    scanf("%lf", &distancia);   
    getchar();

    printf("qual e o tempo que o carro gasta para percorrer a distancia mencionada\n");
    scanf("%lf", &tempo);
    getchar();

    velocidadeMedia = distancia / tempo;

    printf("a velocidade media do veiculo e %.2lf\n", velocidadeMedia);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}