// 5- Faça um programa para ler os votos (sim=1 / não=2) e o gênero
// (mas=1 / fem=2) de um grupo de 7 pessoas.
// Ao final mostre:


#include <stdio.h>

int main() {

    int escolhaSex=0, sexM=0, sexF=0, escolhaVot=0, votoS=0, votoN=0, mSim=0, hNao=0;

     for (int i = 0; i < 7; i++)
     {
        printf("vote: sim=1 / nao=2\n");
        scanf("%d", &escolhaVot);
        getchar();

        printf("vote: mas=1 / fem=2\n");
        scanf("%d", &escolhaSex);
        getchar();
        
        if (escolhaVot == 1)
        {
            // 1 - sim
            votoS++;
            if (escolhaSex == 2)
            {
                mSim++; // vendo quantas mulheres escolheram sim 
            }
            
        }else if (escolhaVot == 2)
        {
            // 2 - nao 
            votoN++;
            if (escolhaSex == 1)
            {
                hNao++; // vendo quantos homens falaram nao
            }
            
        }

        
        if (escolhaSex == 1)
        {
            // 1 - sexM
            sexM++;
        }else if (escolhaSex == 2)
        {
            // 2 - sexF
            sexF++;
        }
        // A ocorrência de sim e de não nas respostas;
        // O número de mulheres e o número de homens;
        // O número de mulheres que responderam sim;
        // O número de homens que responderam não;
    }

    printf("teve %d votos para sim e %d votos para nao.\n", votoS, votoN);
    printf("teve %d votos de mulheres e %d votos de homens.\n", sexF, sexM);
    printf("O numero de mulheres que responderam sim: %d\n", mSim);
    printf(" O numero de homens que responderam nao: %d.\n", hNao);
    
     

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}