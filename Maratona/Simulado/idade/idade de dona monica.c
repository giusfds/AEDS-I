#include <stdio.h>

int main() {

    int monica=0,f1=0,f2=0,f3=0, maisvelho=0;

    scanf("%d", &monica);
    scanf("%d", &f1);
    scanf("%d", &f2);

    f3 = monica - (f1+f2);

    if (f1>f2)
    {
        if (f1 > f3)
        {
            maisvelho = f1;
        }else{
            maisvelho = f3;
        }
        
    }else{
        if (f2 > f3)
        {
            maisvelho = f2;
        }else{
            maisvelho = f3; 
        }
        
    }
    

    printf("%d\n", maisvelho);

    printf("\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}