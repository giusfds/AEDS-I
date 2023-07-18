#include <stdio.h>

void mulher(){
    double aux=62.1, altura, conta=0;

    printf("qual sua altura\n");
    scanf("%lf", &altura);

    conta = (aux * altura)-47.7;
    printf("seu peso ideal e %.2lf\n", conta);

}
void homem(){
    double aux=72.7, altura, conta=0;

    printf("qual sua altura\n");
    scanf("%lf", &altura);

    conta = (aux * altura)-58;
    printf("seu peso ideal e %.2lf\n", conta);

}

int main() {

   char sexo;
   do
   {
    printf("qual e o sexo, M para masculino e F para feminino\n");
    scanf("%c", &sexo);
   } while (sexo != 'M' || sexo != 'F');
    if (sexo == 'm' || sexo == 'M')
    {
        homem();
    }else{
        mulher();
    }
    
   
   

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}