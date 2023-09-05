#include <stdio.h>
#include <string.h>

int main() {

    char palavra1[80], palavra2[80];

    printf("qual e a primeira palavra\n");
    scanf("%s", &palavra1[80]);
    getchar();

    printf("qual e a segunda palavra\n");
    scanf("%s", &palavra2[80]);
    getchar();


    printf("a concatenacao das duas palavras e:\n");
    printf("%s %s\n", palavra1[80], palavra2[80]);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}