#include <stdio.h>

//calcule e mostre a idade em anos de uma pessoa

int main()
{

    int anoemquenasceu=0, anoatual= 2023;

    printf("coloque o ano atual\n");
    scanf("%d", &anoatual);
    getchar();
    printf("coloque o ano em que voce nasceu\n");
    scanf("%d", &anoemquenasceu);
    getchar();
    
    int idade= 0;
    
    idade= anoatual-anoemquenasceu;

    printf("idade%d", idade);



    return 0;

}