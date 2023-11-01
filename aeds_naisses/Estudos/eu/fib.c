#include <stdio.h>

int fib (int num){
    if (num <= 1 )
    {
        return 0;
    }else{
        return fib (num - 1) + fib (num - 2);
    }
    
}

int main() {

    int num;

    scanf("%d", &num);

    int fibo = fib(num);

    printf("%d\n", fibo);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}