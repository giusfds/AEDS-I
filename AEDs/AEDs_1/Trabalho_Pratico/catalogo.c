#include <stdio.h>

typedef struct catalogo
{
    /* 
        Giuseppe Sena Cordeiro - 801779
        edicao/cadastro/excluir novos carros
        todos os direitos reservados
    */
    char placa;
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
    do
    {
        printf("Ola, aqui em baixo esta nosso menu, escolha a opcao\n");
        printf("[1] - para listar todos os veiculos\n");
        printf("[2] - para pesquisar os veiculos\n");
        printf("[3] - para cadastrar um novo veiculo\n");
        printf("[4] - para editar o cadastro do veiculo\n");
        printf("[5] - excluir um carro ja existente\n");
        printf("[0] - sair do programa\n");
        scanf("%d", &aux);
    } while (aux > 5 || aux < 0);
    
    return aux;
}

void cadastro(struct catalogo *carroptr){
    int aux1;
    printf("e um carro ou uma moto? [1] para carro, [2] para moto\n");
    scanf("%d", &aux1);

    if (aux1 == 1)
    {
        printf("qual e a placa do carro\n");
        scanf("%s", carroptr -> placa);
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
        scanf("%s", carroptr -> placa);
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
    /* 
        Giuseppe Sena Cordeiro - 801779
        todos os direitos reservados
        excluir/cadastro/edicao novos carros
    */

    //esa funcao nao e void, tem q retornar um numero
    printf("o que voce deseja editar\n ");
    printf("[1] - para a placa\n [2] - para o modelo\n [3] - para a marca\n [4] - para a marca\n [5] - para o ano\n [6] - para o preco\n [7] - para mudar a obs\n");
    
    
}

int main() {
    int resultadomenu, carrosacadastrar;

    printf("quntos carros vc quer cadastrar\n");
    scanf("%d", &carrosacadastrar);


    //tentativa de ufazer o menu funcionar
    switch () {
        case 1:
            printf("Executando caso 1\n");
            break;
        case 2:
            printf("Executando caso 2\n");
            break;
        case 3:
            printf("Executando caso 3\n");
            break;
        case 4:
            printf("Executando caso 3\n");
            break;
        case 5:
            printf("Executando caso 3\n");
            break;
        case 6:
            printf("Executando caso 3\n");
            break;
        case 0:
            printf("Executando caso 3\n");
            break;
        default:
            printf("Caso padrão\n");
            break;
    }
    
    
    
        /* 
        1) como que eu vou testar as placas
        2) a condicao do if em edicao, e tem que ser com ponteiro tbm?
        3) como guardar em uma variavel a questao que esta presente no "menu"
        4) usar o "do wile"?
        5) como fazer o mecanismo de pesquisa
        6) como distinguir o carro da moto
        7) restricao do menu, so usar caracteres validos
        */
    
    
    /* 
        todos os direitos reservados
        Giuseppe Sena Cordeiro - 801779
        excluir/cadastro/edicao novos carros
    */

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
    /* 
        Giuseppe Sena Cordeiro - 801779
        cadastro/edicao/excluir novos carros
        todos os direitos reservados
    */