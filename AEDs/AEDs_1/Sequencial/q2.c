#include <stdio.h>

int main() {
    int media, n1, n2, n3;

    printf("informe os numero que voce quer acar a media\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    media = (n1+n2+n3)/3;
    printf("a media de todos os numeros e %d\n", media);


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}