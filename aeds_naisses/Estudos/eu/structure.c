#include <stdio.h>

struct aluno
{
    int idade;
    char nome[50];
    double matricula;
};

void preencherAluno(struct aluno *alunoptr){

    printf("qual o nome do aluno\n");
    scanf("%s", alunoptr -> nome);

    printf("qual o idade do aluno\n");
    scanf("%s", alunoptr -> idade);

    printf("qual o matricula do aluno\n");
    scanf("%s", alunoptr -> matricula);

}

void printarAluno(struct aluno aluno){
    printf("nome: %s\n", aluno.nome);
    printf("idade: %d\n", aluno.idade);
    printf("matricula: %.0lf\n", aluno.matricula);
}


int main() {
    struct aluno aluno;

    int quantidadeAluno;

    printf("quantos alunos vc quer cadastrar\n");
    scanf("%d", &quantidadeAluno);
    
    struct aluno aluno[quantidadeAluno];

    for (int i = 0; i < quantidadeAluno; i++)
    {
        preencherAluno();
    }


    printarAluno(aluno);


    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}