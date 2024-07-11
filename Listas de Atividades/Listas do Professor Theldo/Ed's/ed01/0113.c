#include <stdio.h>

int main() {

    double lado, altura, ladox4, alturax4, area;

    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado);
    getchar();

    if (lado>0){
        
        printf("fale o numero corespondente a altura\n");
        scanf("%d", &altura);
        getchar();
        if (altura>0)
        {
            ladox4 = lado * 4;
            alturax4 = altura *4;

            area =  alturax4 * ladox4;

            printf("a area do retangulo 4x maior e %.2lf\n", area);

        }else{
            printf("o valor e negativo ou igual a 0\n");
        }
        
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}