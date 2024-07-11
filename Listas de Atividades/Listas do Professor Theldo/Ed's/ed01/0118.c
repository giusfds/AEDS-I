#include "io.h"

int main() {

    double valor1, valor2, valor3, valor17=0, valor27=0, valor37=0, volume; 

    printf("qual e o valor1 que vc quer colocar");
    scanf("%lf", &valor1);
    getchar();

    if (valor1>0)
    {
        printf("qual e o valo2 que vc quer colocar");
        scanf("%lf", &valor2);
        getchar();
        if (valor2>0)
        {
            printf("qual e o valo3 que vc quer colocar");
            scanf("%lf", &valor3);
            getchar();
            if (valor3>0)
            {
                valor17 = valor1/7;
                valor27 = valor2/7;
                valor37 = valor3/7;

                volume = valor17 * valor27 * valor37;

                printf("o valor do volume do cuvo 7x menor e %.2lf\n", volume);
            }else{
            printf("o valor e negativo ou igual a 0\n");
            }
            
        }else{
        printf("o valor e negativo ou igual a 0\n");
        }
   
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }

    puts("\n--------- | FIM DO PROGRAMA | ---------\n");
    return 0;
}