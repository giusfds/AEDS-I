#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_PLACA 8
#define TAM_MAX_MARCA 50
#define TAM_MAX_MODELO 50
#define TAM_MAX_OBSERV 100



struct Veiculo {
    char placa[TAM_MAX_PLACA];
    char marca[TAM_MAX_MARCA];
    char modelo[TAM_MAX_MODELO];
    int ano;
    double preco;
    char tipo[6];
    char observacao[TAM_MAX_OBSERV];
};

void limpa_cache() {
    scanf("%*[^\n]"); 
    getchar();
}

void listarVeiculos(struct Veiculo* veiculos, int quantidade) {
    printf("Total de veiculos cadastrados: %d\n", quantidade);
    printf("------------------------------------------\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Placa: %s\n", veiculos[i].placa);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Ano: %d\n", veiculos[i].ano);
        printf("Preco: %.2lf\n", veiculos[i].preco);
        printf("Tipo: %s\n", veiculos[i].tipo);
        printf("Observacao: %s\n", veiculos[i].observacao);
        printf("------------------------------------------\n");
    }
}

void pesquisarVeiculo(struct Veiculo* veiculos, int quantidade) {
    char placa[TAM_MAX_PLACA];
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);
    limpa_cache();

    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2lf\n", veiculos[i].preco);
            printf("Tipo: %s\n", veiculos[i].tipo);
            printf("Observacao: %s\n", veiculos[i].observacao);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Veiculo nao encontrado.\n");
    }
}

void cadastrarVeiculo(struct Veiculo* veiculos, int* quantidade) {
    if (*quantidade >= 100) {
        printf("Limite de veiculos cadastrados atingido.\n");
        return;
    }

    struct Veiculo veiculo;
    printf("Digite a placa do veiculo: ");
    scanf("%s", veiculo.placa);
    limpa_cache();

    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(veiculos[i].placa, veiculo.placa) == 0) {
            printf("Ja existe um veiculo cadastrado com essa placa.\n");
            return;
        }
    }

    printf("Digite a marca do veiculo: ");
    scanf("%s", veiculo.marca);
    limpa_cache();
    printf("Digite o modelo do veiculo: ");
    scanf("%s", veiculo.modelo);
    limpa_cache();
    printf("Digite o ano do veiculo: ");
    scanf("%d", &veiculo.ano);
    limpa_cache();
    printf("Digite o preco do veiculo: ");
    scanf("%lf", &veiculo.preco);
    limpa_cache();
    printf("Digite o tipo do veiculo (Carro ou Moto): ");
    scanf("%s", veiculo.tipo);
    limpa_cache();
    printf("Digite uma observacao (opcional): ");
    fgets(veiculo.observacao, TAM_MAX_OBSERV, stdin);
    veiculo.observacao[strcspn(veiculo.observacao, "\n")] = '\0';

    veiculos[(*quantidade)++] = veiculo;

    FILE* arquivo = fopen("veiculos.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%d\n", *quantidade);
        for (int i = 0; i < *quantidade; i++) {
            fprintf(arquivo, "%s;%s;%s;%d;%.2lf;%s;%s\n",
                    veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo,
                    veiculos[i].ano, veiculos[i].preco, veiculos[i].tipo,
                    veiculos[i].observacao);
        }
        fclose(arquivo);
    }

    printf("Veiculo cadastrado com sucesso.\n");
}

void editarVeiculo(struct Veiculo* veiculos, int quantidade) {
    char placa[TAM_MAX_PLACA];
    printf("Digite a placa do veiculo a ser editado: ");
    scanf("%s", placa);
    limpa_cache();

    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2lf\n", veiculos[i].preco);
            printf("Tipo: %s\n", veiculos[i].tipo);
            printf("Observacao: %s\n", veiculos[i].observacao);

            printf("Digite a nova marca do veiculo: ");
            scanf("%s", veiculos[i].marca);
            limpa_cache();
            printf("Digite o novo modelo do veiculo: ");
            scanf("%s", veiculos[i].modelo);
            limpa_cache();
            printf("Digite o novo ano do veiculo: ");
            scanf("%d", &veiculos[i].ano);
            limpa_cache();
            printf("Digite o novo preco do veiculo: ");
            scanf("%lf", &veiculos[i].preco);
            limpa_cache();
            printf("Digite o novo tipo do veiculo (Carro ou Moto): ");
            scanf("%s", veiculos[i].tipo);
            limpa_cache();
            printf("Digite uma nova observacao (opcional): ");
            fgets(veiculos[i].observacao, TAM_MAX_OBSERV, stdin);
            veiculos[i].observacao[strcspn(veiculos[i].observacao, "\n")] = '\0';

            FILE* arquivo = fopen("veiculos.txt", "w");
            if (arquivo != NULL) {
                fprintf(arquivo, "%d\n", quantidade);
                for (int j = 0; j < quantidade; j++) {
                    fprintf(arquivo, "%s;%s;%s;%d;%.2lf;%s;%s\n",
                            veiculos[j].placa, veiculos[j].marca, veiculos[j].modelo,
                            veiculos[j].ano, veiculos[j].preco, veiculos[j].tipo,
                            veiculos[j].observacao);
                }
                fclose(arquivo);
            }

            printf("Veiculo atualizado com sucesso.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Veiculo nao encontrado.\n");
    }
}

void excluirVeiculo(struct Veiculo* veiculos, int* quantidade) {
    char placa[TAM_MAX_PLACA];
    printf("Digite a placa do veiculo a ser excluido: ");
    scanf("%s", placa);
    limpa_cache();

    int encontrado = 0;
    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2lf\n", veiculos[i].preco);
            printf("Tipo: %s\n", veiculos[i].tipo);
            printf("Observacao: %s\n", veiculos[i].observacao);

            char confirmacao;
            printf("Deseja excluir o veiculo? (S/N): ");
            scanf("%c", &confirmacao);
            limpa_cache();

            if (confirmacao == 'S' || confirmacao == 's') {
                for (int j = i; j < *quantidade - 1; j++) {
                    veiculos[j] = veiculos[j + 1];
                }
                (*quantidade)--;

                FILE* arquivo = fopen("veiculos.txt", "w");
                if (arquivo != NULL) {
                    fprintf(arquivo, "%d\n", *quantidade);
                    for (int j = 0; j < *quantidade; j++) {
                        fprintf(arquivo, "%s;%s;%s;%d;%.2lf;%s;%s\n",
                                veiculos[j].placa, veiculos[j].marca, veiculos[j].modelo,
                                veiculos[j].ano, veiculos[j].preco, veiculos[j].tipo,
                                veiculos[j].observacao);
                    }
                    fclose(arquivo);
                }

                printf("Veiculo excluido com sucesso.\n");
            } else {
                printf("Operacao cancelada.\n");
            }

            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Veiculo nao encontrado.\n");
    }
}


int main() {
    struct Veiculo veiculos[100];
    int quantidade = 0;

    FILE* arquivo = fopen("veiculos.txt", "r");
    if (arquivo != NULL) {
        fscanf(arquivo, "%d\n", &quantidade);
        for (int i = 0; i < quantidade; i++) {
            fscanf(arquivo, "%[^;];%[^;];%[^;];%d;%lf;%[^;];%[^\n]\n",
                   veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo,
                   &veiculos[i].ano, &veiculos[i].preco, veiculos[i].tipo,
                   veiculos[i].observacao);
        }
        fclose(arquivo);
    }

    int opcao;
    do {
        printf("\n==== Menu Principal ====\n");
        printf("1. Listar todos os veiculos\n");
        printf("2. Pesquisar um veiculo\n");
        printf("3. Cadastrar um veiculo\n");
        printf("4. Editar um veiculo\n");
        printf("5. Excluir um veiculo\n");
        printf("6. Sair do programa\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        limpa_cache();

        switch (opcao) {
            case 1:
                listarVeiculos(veiculos, quantidade);
                break;
            case 2:
                pesquisarVeiculo(veiculos, quantidade);
                break;
            case 3:
                cadastrarVeiculo(veiculos, &quantidade);
                break;
            case 4:
                editarVeiculo(veiculos, quantidade);
                break;
            case 5:
                excluirVeiculo(veiculos, &quantidade);
                break;
            case 6:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Digite novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}