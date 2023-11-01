#include <stdio.h>

typedef struct
{
    int a;
    int b;
    int c;
}c;


int main() {

    c x;
    

    scanf("%d", &x.a);
    scanf("%d", &x.b);
    scanf("%d", &x.c);


    printf("\n");
    printf("\n");


    printf("%d\n", x.a);
    printf("%d\n", x.b);
    printf("%d\n", x.c);


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}