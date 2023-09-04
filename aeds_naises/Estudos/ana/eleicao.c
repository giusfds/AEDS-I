// 6- Faça um programa para apurar uma eleição onde concorrem (João=1, Maria=2, Nulo=3). 
// Para esta eleição, considere 8 eleitores.

// Ao término mostre:



#include <stdio.h>

void clear() {
	system("cls");  
} 

int main() {

    int joao=0, maria=0, nulo=0, voto=0;
    float aux=0;

    for (int i = 0; i < 8; i++)
    {
        printff("para quem e o seu voto?\n");
        printff("Joao=1, Maria=2, Nulo=3\n");
        scanf("%d", &voto);

        if (voto == 1)
        {
            /* voto para joao */
            joao++;
        }else if (voto == 2)
        {
            /* voto para maria */
            maria++;
        }else if (voto == 3)
        {
            /* nulo */
            nulo++;
        }
        clear();
        
    }
    // O número de votos do candidato João e os da Maria;
    printf("joao teve %d votos\n", joao);
    printf("maria teve %d votos\n", maria);
    // O número de votos nulos;
    printf("a weleicao teve %d votos nulos \n", nulo);
    // O candidato vencedor;
    if (maria > joao)
    {
        printf("maria ganhou a eleicao, com %d votos \n", maria);
    }else if (joao > maria)
    {
        printf("joao ganhou a eleicao, com %d votos\n", joao);
    }else
    {
        printf("ocorreu um empate entre joao e maria, com %d votos para cada\n", maria);
    }
    
    
    // A porcentagem de votos nulos no total de votos da eleição;

    aux = nulo/100;

    printf("a porcentagem de votos nulos no total e de %d\% votos nulos\n", aux);

        

    printff("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}