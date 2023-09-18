#include <stdio.h>

int main() {

    int idade1, idade2, idade3;

    printf("qual e a idade da primeira pessoa\n");
    scanf("%d", &idade1);
    getchar();

    printf("qual e a idade da segunda pessoa\n");
    scanf("%d", &idade2);
    getchar();

    printf("qual e a idade da terceira pessoa\n");
    scanf("%d", &idade3);
    getchar();

    int mediaIdade; 
    mediaIdade = (idade1 + idade2 + idade3)/3 ;

    printf("a media das idades destacada e %d\n", mediaIdade);

    return 0;
}