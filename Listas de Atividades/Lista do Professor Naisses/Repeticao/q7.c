#include <stdio.h>

int main() {
    int numeros, aux=0;
 
    printf("quantos numeros vc quer\n");
    scanf("%d", &numeros);

    for(int i=1; i<=numeros; i+=2){
        aux+=i;
    }

    printf("%d\n", aux);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}