#include <stdio.h>
#include <math.h>

int main() {

    int n=0, i=0;
    float somatorio=0.0;

    printf("qual o valor de n\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        somatorio += 1/(pow(2,i));
    }

    while(i<=n){
        somatorio+=1/(pow(2,i));
        i++;
    }
    
    printf("%f\n", somatorio);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}