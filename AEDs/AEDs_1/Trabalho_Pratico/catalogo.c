#include <stdio.h>

typedef struct carro
{
    /*
        Giuseppe Sena Cordeiro - 801779
        edicao/cadastro/excluir novos carros
        todos os direitos reservados
    */
    char placa[80];
    char modelo[80];
    char marca[80];
    int ano;
    float preco;
    char tipo;
    char obs[500];
} carro;

void cadastroarquivo()
{
    // aqui e para cadastrar o carro no txt
}

void cadastroveiculos()
{
    //aqui tem que fazer o cadastro dentr do for da main
    printf("\n");
}

void cadastro(struct carro *carroptr)
{
    int aux;

    do
    {
        printf("e um carro ou uma moto? [1] para carro, [2] para moto\n");
        scanf("%d", &aux);
    } while (aux < 1 || aux > 2);

    if (aux == 1)
    {
        FILE *cadastro = fopen("cadastro.txt", "a");
        fprintf (cadastro, "Carro");
        printf("qual e a placa do carro\n");
        scanf("%s", carroptr->placa);
        fprintf(cadastro, "A placa do carro e: %s", carroptr->placa);
        // colocar isso ai ^ para todos os printsf
        printf("qual e o modelo do carro\n");
        scanf("%s", carroptr->modelo);
        printf("qual e a marca do carro\n");
        scanf("%s", carroptr->marca);
        printf("qual e a placa do carro\n");
        scanf("%d", carroptr->ano);
        printf("qual e ano do carro\n");
        scanf("%lf", carroptr->preco);
        printf("qual e o preco do carro\n");
        scanf("%lf", carroptr->obs);
        // falta distinguir isso de uma moto
    }
    else
    /*
        Giuseppe Sena Cordeiro - 801779
        cadastro/excluir/edicao novos carros
        todos os direitos reservados
    */
    {
        FILE *cadastro = fopen("cadastro.txt", "a");
        fprintf (cadastro, "Moto");
        // falta colocar os fprintsf aqui, copiando do carro
        printf("qual e a placa do moto\n");
        scanf("%s", carroptr->placa);
        printf("qual e o modelo do moto\n");
        scanf("%s", carroptr->modelo);
        printf("qual e a marca do moto\n");
        scanf("%s", carroptr->marca);
        printf("qual e a placa do moto\n");
        scanf("%d", carroptr->ano);
        printf("qual e ano do moto\n");
        scanf("%lf", carroptr->preco);
        printf("qual e o preco do moto\n");
        scanf("%s", carroptr->obs);
        // falta distinguir isso de uma carro
        
    }



}

int menu()
{

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


void edicao()
{
    /*
        Giuseppe Sena Cordeiro - 801779
        todos os direitos reservados
        excluir/cadastro/edicao novos carros
    */

    // esa funcao nao e void, tem q retornar um numero
    printf("o que voce deseja editar\n ");

    printf("[1] - para a placa\n");
    printf("[2] - para a marca\n");
    printf("[3] - para o modelo\n");
    printf("[4] - para o ano \n");
    printf("[5] - para o preco\n");
    printf("[6] - para tipo\n");
    printf("[7] - para a observacao\n");
}

int main()
{
    int resultadomenu, carrosacadastrar;

    printf("quntos carros vc quer cadastrar\n");
    scanf("%d", &carrosacadastrar);
    resultadomenu = menu();

    // tentativa de ufazer o menu funcionar
    switch (resultadomenu)
    {
    case 1:
        printf("aqui esta a lista de veiculos\n");
        break;
        // colocar uma funcao aqui para colocar a lista dos carros
    case 2:
        printf("aqui esta a pesquisa de carros, digite o carro que vc quer:\n");
        break;
        // colocar uma funcao para procurrar o carro que vc deseje
    case 3:
        printf("cadastre um novo veiulo aqui\n");
        for (int i = 0; i < carrosacadastrar; i++)
        {
            cadastroveiculos();
        }

        break;
        // colocar a funcao que cadastre os carros aqui (struct)
    case 4:
        printf("a lista de veiculos que vc quer editar\n");
        break;
        // colocar a funcao de cadastro de carro com edicao (malloc)
    case 5:
        printf("qual carro vc quer excluir\n");
        break;
        // funcao para excluir um carro (malloc)
    case 6:
        printf("quer mesmo sair do programa?\n");
        break;
        // aqui tem que ter a funcao com if se quer ou nao sair do programa
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