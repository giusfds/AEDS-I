#include <stdio.h>

int main() {

    int d1,d2,p,par,impar,soma;

    scanf("%d", &p);
    scanf("%d", &d1);
    scanf("%d", &d2);

    soma = d1 + d2;

    if (soma % 2 == 0 )
    {
        if (p == 0)
        {
            //alice ganha
            printf("0\n");
        }else{
            //bobo ganha
            printf("1\n");
        }
        
    }else{
        if (p==1)
        {
            //alive ganha
            printf("0\n");  
        }else{
            //bob ganha
            printf("1\n");
        }
        
    }
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}