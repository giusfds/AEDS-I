#include <stdio.h>

int main() {

   FILE* arquivo = fopen("arquivoQ3.txt", "a");
   int idadeFilho, idadePai, idadeMae;

   fprintf(arquivo, "\n---nova familia---\n");

   printf("qual a idade do filho\n");
   scanf("%d", &idadeFilho);

    printf("qual a idade do Mae\n");
   scanf("%d", &idadeMae);

    printf("qual a idade do Pai\n");
   scanf("%d", &idadePai);

   fprintf(arquivo,"%d \n%d \n%d", idadeFilho, idadeMae, idadePai);
   fclose(arquivo);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}