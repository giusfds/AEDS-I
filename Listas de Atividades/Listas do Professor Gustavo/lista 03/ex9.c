#include "Giuseppe.h"

bool primo (int x){
    bool prime=true;
    if (x==0 OR x==1){
        prime=false;
    }
    else{
        for (int i=2; i<=x/2; i++){
            if (x%i==0) prime=false;
        }
    }
    return prime;
}

int main() {

    clear();
    id("exercicio 9");

    int numero=0;
    // definido na biblioteca como isPrime
    if (primo(numero))
    {
        printf("o numero e' primo\n");
    }else
    {
        printf("o numero nao e' primo\n");
    }
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}