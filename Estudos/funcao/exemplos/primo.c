#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primo (int x){
    bool prime=true;
    if (x==0 || x==1){
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

    int numero=0;
    scanf("%d", &numero);

    if (primo(numero))
    {
        printf("o numero e' primo\n");
    }else
    {
        printf("o numero nao e' primo\n");
    }

    return 0;
}