#include "Giuseppe.h"

bool parImp(int numero){
    if (numero % 2 == 0 )
    {
        return true;
    }
    return false;
}

int main() {

    clear();
    id("exercicio 1");

    int numero=0;

    numero= readint("qual e o numero que vc quer ler: ");

    if (parImp(numero))
    {
        printf("o numero e par\n");
    }else
    {
        printf("o numero e impar\n");
    }
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}