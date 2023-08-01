#include <stdio.h>

int menu(){
    int aux;
    printf("ola, aqui tem as opcoes das contas basicas\n");
    printf("1) para adicao\n");
    printf("2) para subtracao\n");
    printf("3) para divisao\n");
    printf("4) para multiplicacao\n");
    scanf("%d", &aux);
    return aux;
}

void adicao(){
    int qntNumero, aux=0;
    printf("quantos numeros vc que somar\n");
    scanf("%d", &qntNumero);
    int numero[qntNumero];
    for (int i = 0; i < qntNumero; i++)
    {
        printf("qual e o %d numero que vc quer somar\n", i+1);
        scanf("%d", &numero[i]);
        aux+=numero[i];
    }
    printf("o valor da soma e %d\n", aux);
    
}

void subtracao(){

}

void divisao(){

}

void multiplicacao(){

}

int main() {

   if (menu() == 1)
   {
    adicao();   
   }else if(menu() == 2){
    subtracao();
   }else if(menu() == 3){
    divisao();
   }else if(menu() == 4){
    multiplicacao();
   }
   

   

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}