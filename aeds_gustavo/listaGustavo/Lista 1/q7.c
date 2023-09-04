#include <stdio.h>

int main() {

    char texto[80];

    printf("qual e o texto que vc quer ler\n");
    scanf("%s", &texto);

    printf("aqui esta o seu texto: %s\n", texto);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}