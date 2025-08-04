#include <stdio.h>

int main() {

    int fib1=0, fib2=1, proxfib, n;
    printf("qual e a quantidade de termos de fibonocci que vc quer\n");
    scanf("%d", &n);
    getchar();

    printf("a sequencia de fibonacci apartir dos numeros\n");
    printf("[%d] e [%d]\n\n", fib1, fib2);

    for (int i = 0; i < n; i++)
    {
        proxfib = fib1 + fib2;
        printf("%d ", proxfib);
        fib1 = fib2;
        fib2 = proxfib;
    }
    
    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}