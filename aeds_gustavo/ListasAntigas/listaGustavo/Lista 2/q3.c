#include <stdio.h>

int main() {

    int a=0, b=0;

    printf("qual e o primeiro valor que vc quer\n");
    scanf("%d", &a);
    getchar();
    printf("qual e o segundo valor que vc quer\n");
    scanf("%d", &b);
    getchar();

    if (a>b)
    {
        printf("o primeiro numero e maior [%d]\n",a);
    }else if (b>a)
    {
        printf("o segundo numero e maior [%d]\n",b);
    }else
    {
        printf("ambos os numeros sao iguais\n");
    }
    
    
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}