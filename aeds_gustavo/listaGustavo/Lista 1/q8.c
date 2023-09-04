#include <stdio.h>
#include <string.h>

int main() {

    char texto1[80], texto2[80];

    printf("qual e o texto 1\n");
    scanf("%s", &texto1);

    printf("qual e o texto 2\n");
    scanf("%s", &texto2);

    printf("%s %s\n", texto1, texto2);

    strcat (texto1, texto2);

    printf("strcat= %s\n", texto1);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}