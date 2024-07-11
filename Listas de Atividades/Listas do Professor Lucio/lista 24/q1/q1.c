#include <stdio.h>

int main() {

   FILE* arquivo = fopen("arquivoQ1.txt", "w");
   fprintf(arquivo, "ola mundo\n");
   fclose(arquivo);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}