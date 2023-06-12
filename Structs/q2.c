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
    scanf("%s",carroptr->marca);
    printf("qual o modelo do carro\n");
    scanf("%s",carroptr->modelo);
    printf("qual a cor do carro\n");
    scanf("%s",carroptr->cor);
    printf("qual o ano do carro\n");
    scanf("%d%*c",&carroptr->ano);

}

void printinfo (struct carro carro){

    printf("a marca do carro e:%s \n", carro.marca);
    printf("o modelo do carro e:%s \n", carro.modelo);
    printf("a cor do carro e:%s \n", carro.cor);
    printf("o ano do carro e:%d \n", carro.ano);

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