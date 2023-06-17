#include <stdio.h>

typedef struct catalogo
{
    /* 
        Giuseppe Sena Cordeiro - 801779
        edicao/cadastro/excluir novos carros
        todos os direitos reservados
    */
    double placa;
    char modelo[80];
    char marca[80];
    int ano;
    float preco;
    char tipo;
    char obs[500];
}catalogo;

int menu(){

    /* 
        Giuseppe Sena Cordeiro - 801779
        cadastro/edicao/excluir novos carros
        todos os direitos reservados
    */

    int aux;
    printf("qual opcao voce vai querer\n");
    printf("1 - cadastrar novo carro\n");
    printf("2 - editar um carro ja existente\n");
    printf("3 - excluir um carro\n");
    scanf("%d", &aux);
    return aux;
}

void cadastro(struct catalogo *carroptr){
    int aux1;
    printf("e um carro ou uma moto? [1] para carro, [2] para moto\n");
    scanf("%d", &aux1);

    if (aux1 == 1)
    {
        printf("qual e a placa do carro\n");
        scanf("%lf", carroptr -> placa);
        printf("qual e o modelo do carro\n");
        scanf("%s", carroptr -> modelo);
        printf("qual e a marca do carro\n");
        scanf("%s", carroptr -> marca);
        printf("qual e a placa do carro\n");
        scanf("%d", carroptr -> ano);
        printf("qual e ano do carro\n");
        scanf("%lf", carroptr -> preco);
        printf("qual e o preco do carro\n");
        scanf("%lf", carroptr -> obs);
        //falta distinguir isso de uma moto
    }else
    /* 
        Giuseppe Sena Cordeiro - 801779
        cadastro/excluir/edicao novos carros
        todos os direitos reservados
    */
    {
        printf("qual e a placa do moto\n");
        scanf("%lf", carroptr -> placa);
        printf("qual e o modelo do moto\n");
        scanf("%s", carroptr -> modelo);
        printf("qual e a marca do moto\n");
        scanf("%s", carroptr -> marca);
        printf("qual e a placa do moto\n");
        scanf("%d", carroptr -> ano);
        printf("qual e ano do moto\n");
        scanf("%lf", carroptr -> preco);
        printf("qual e o preco do moto\n");
        scanf("%s", carroptr -> obs);
        //falta distinguir isso de uma carro
    }

}

void edicao(){
    printf("o que voce deseja editar\n ");
    printf("[1] - para a placa\n [2] - para o modelo\n [3] - para a marca\n [4] - para a marca\n [5] - para o ano\n [6] - para o preco\n [7] - para mudar a obs\n");
    
    
}

int main() {
    int resultadomenu;
    //pega o resultado do menu, o que a pessoa quer fazer
    resultadomenu=menu;

    if (resultadomenu == 1)
    {
        /* cadastro do carro */
        cadastro;

    }
    if (resultadomenu == 2)
    {
        /* edicao do carro */
    }
    if (resultadomenu == 3)
    {
        /* deleter um carro */
        
    }
    
    
    
        
    
    


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}