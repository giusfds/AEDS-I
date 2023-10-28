#include <stdio.h>

float nota(float nota1, float nota2, float nota3, char tipo){
    if ((tipo == 'p') || (tipo == 'P'))
    {
        float peso1 = 5, peso2 = 3, peso3 = 2;
        float somaPesos = peso1 + peso2 + peso3;
        
        float mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / somaPesos;

        return mediaPonderada;
    }
    else if ((tipo == 'a') || (tipo == 'A'))
    {
        float media = (nota1 + nota2 + nota3) / 3;
        return media;
    }
}

int main() {

    int qnt;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qnt);
    getchar();

    float nota1[qnt]; // peso 5
    float nota2[qnt]; // peso 3
    float nota3[qnt]; // peso 2

    for (int i = 0; i < qnt; i++)
    {
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f", &nota1[i]);
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f", &nota2[i]);
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f", &nota3[i]);
    }
    

    char correcao;
    do
    {
        printf("Digite qual o tipo de correcao que vc quer ter na questao [A] para media simples [P] para media ponderada\n");
        scanf(" %c", &correcao); 
    } while (correcao!='A' || correcao!='a' || correcao!='P' || correcao!='p');
    
    float notaFinal = nota(nota1[0], nota2[0], nota3[0], correcao);

    printf("A nota final foi %.2f\n", notaFinal);
    
    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
