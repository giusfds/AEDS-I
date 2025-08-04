#include "Giuseppe.h"

bool num2(int numero){
    if (numero%2==0)
    {
        return true;
    }
    return false;
}

bool num5(int numero){
    if (numero%5==0)
    {
        return true;
    }
    
    return false;
}


int main() {

    clear();
    id("exercicio 3");

    int numero=0;

    numero = readint("qual e o numero que vc quer conferir: ");

    if (num2(numero))
    {
        if ((num2(numero)) && (num5(numero)))
        {
           printf("O numero e divisivel 2, 5 e 10\n");
           return 0;
        }

        printf("O numero e divisivel por 2");
    }else if (num5(numero))
    {
        printf("O numero e divisivel por 5");
    }else if ((num2(numero)) AND (num5(numero)))
    {
        printf("O numero e divisivel por 10");
    }else{
        printf("O numero nao e divisivel");
    }

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}