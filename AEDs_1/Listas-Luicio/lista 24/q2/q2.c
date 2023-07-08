#include <stdio.h>

int main() {

   FILE* arquivo = fopen("arquivoQ2.txt", "w");
   int idade;

   printf("qual a sua idade\n");
   scanf("%d", &idade);

   fprintf(arquivo,"%d", idade);
   fclose(arquivo);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}