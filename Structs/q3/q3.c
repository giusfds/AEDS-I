#include <stdio.h>

struct carro
{
    char marca[50];
    char modelo[50];
    char cor[50];
    int ano;
};

void info(struct carro *carroptr) {
  
    printf("qual a marca do carro\n");
    scanf("%s", carroptr->marca);
    printf("qual o modelo do carro\n");
    scanf("%s", carroptr->modelo);
    printf("qual a cor do carro\n");
    scanf("%s", carroptr->cor);
    printf("qual o ano do carro\n");
    scanf("%d%*c", &carroptr->ano);

}

void printinfo (struct carro carro){
    
    FILE *arquivo = fopen("q3.txt", "a");
    fprintf(arquivo,"a marca do carro e:[%s] ", carro.marca);
    fprintf(arquivo,"o modelo do carro e:[%s] ", carro.modelo);
    fprintf(arquivo,"a cor do carro e:[%s] ", carro.cor);
    fprintf(arquivo,"o ano do carro e:[%d]\n", carro.ano);
    fclose(arquivo);
}

int main() {
    
    struct carro carro1;
    struct carro carro2;
    
    info(&carro1);
    info(&carro2);
    printinfo(carro1);
    printinfo(carro2);


    printf("\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}