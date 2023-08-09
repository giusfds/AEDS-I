//ler um valor real 
//converter real para dolar e euro cotacao do dia 08/08

#include <stdio.h>

void funcao(){
    /* aqui vai ser a sua main tudo o que esta na funcao vai para a main*/

    double valor, dolar, euro;
    printf("qual e o valor que vc deseja converter\n");
    scanf("%lf", &valor);
    getchar();

    euro = valor * 5.57;
    dolar = valor * 4.90;

    printf("o valor da conversao foi realizado dia 08/08\n");

    printf("o valor R$%.2lf em euro e €%.2lf\n", valor, euro);
    printf("o valor R$%.2lf em dolar e €%.2lf\n", valor, dolar);

}

int main() {
    /*minha main, esta de uma forma mais completa, mas nn sei se ele explicou 
    if para vcs, mas tem os dois jeitos ai -D */

    int menu;
    double dolar, euro, real;

    printf("qual e o cambio que deseja\n");
    printf("[1] - dolar\n");
    printf("[2] - euro\n");
    scanf("%d", &menu);
    getchar();

    if (menu == 1){
        //dolar
        printf("valor do cambio 4,90 no dia 08/08\n");
        printf("qual e a quantia que vc desejs converter em reais para dolar\n");
        scanf("%lf", &real);
        getchar();
        dolar = real * 4.90;

        printf("o valor da convercao SEM IOF e de %.2lf\n", dolar);
    }else if (menu == 2){
        //euro
        printf("valor do cambio 5,57 no dia 08/08\n");
        printf("qual e a quantia que vc desejs converter em reais para euro\n");
        scanf("%lf", &real);
        getchar();
        euro = real * 5.57;

        printf("o valor da convercao SEM IOF e de %.2lf\n", euro);

    }else{
        printf("nao reconheco essa moeda\n");
    }
    
    



    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}