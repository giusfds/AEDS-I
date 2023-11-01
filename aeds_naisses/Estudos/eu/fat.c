#include <stdio.h>

int Fat(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else{
        return n * Fat(n-1);
    }
    
}

int main() {

    int fat;

    scanf("%d", &fat);

    int fatorial = Fat(fat);
    
    printf("%d\n", fatorial);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}