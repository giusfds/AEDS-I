#include "io.h"
//coloquei a io.h por ter todas as bibliotecas necessarias para realizar a questao

// Função para calcular h = x * √3 / 2
// x = lado do trinagulo
double calcular_h(double x) {
    double h = x * sqrt(3) / 2;
    return h;
}

int main() {

    double lado, altura, perimetro, area;
    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado); // pegando o lado do trinagulo
    getchar();

    if (lado>0){
        altura = calcular_h(lado);// calculando a altura
        area = (lado*altura)/2;

        perimetro = lado * 3;

        printf("area: %lf\n", area);
        printf("perimetro: %lf\n", perimetro);
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    

    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}