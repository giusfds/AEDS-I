#include <stdio.h>

struct carro
{
    char marca;
    char modelo;
    char cor;
    int ano;
};

void info(struct carro *carroptr) {
  
    printf("qual a marca do carro\n");
    scanf("%s%*c", carroptr->marca);
    printf("qual o modelo do carro\n");
    scanf("%s%*c", carroptr->modelo);
    printf("qual a cor do carro\n");
    scanf("%s%*c", carroptr->cor);
    printf("qual o ano do carro\n");
    scanf("%d%*c", carroptr->ano);

}

void printinfo (struct carro carro){
    
    FILE *arquivo = fopen("q3.txt", "w");
    fprintf(arquivo,"a marca do carro e:\n", carro.marca);
    fprintf(arquivo,"o modelo do carro e:\n", carro.modelo);
    fprintf(arquivo,"a cor do carro e:\n", carro.cor);
    fprintf(arquivo,"o ano do carro e:\n", carro.ano);
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