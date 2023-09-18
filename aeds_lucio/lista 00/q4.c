#include <stdio.h>

void mulher(){
    double aux=62.1, altura=1.92, conta=0;
    conta = (aux * altura)-47.7;
    printf("seu peso ideal e %.2lf\n", conta);

}
void homem(){
    double aux=72.7, altura=1.92, conta=0;
    conta = (aux * altura)-58;
    printf("seu peso ideal e %.2lf\n", conta);

}
int main() {
    int sexo;
    do
    {
        printf("escolha [1] para homem e [2] para mulher\n");
        scanf("%d", &sexo);
    } while (sexo < 1 || sexo > 2);

    switch (sexo)
    {
    case 1:
        homem();
        break;
    case 2:
        mulher();
        break;
    
    default:
        break;
    }

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}