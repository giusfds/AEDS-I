#include "Giuseppe.h"

bool eleitor16(int idade){
    if (idade >= 16)
    {
        return true;
    }
    return false;
}

bool eleitor17(int idade){
    if ((idade >= 16 ) OR (idade <= 17))
    {
        return true;
    }
    return false;
}

bool eleitor18(int idade){
    if ((idade >= 18) OR (idade <= 64))
    {
        return true;
    }
    
    return false;
}

int main() {

    clear();
    id("exercicio 2");

    int idade=0;

    idade = readint("qual e a sua idade: ");

    if (eleitor16(idade))
    {
        printf("voce nao e um eleitor valido, ja que nao tem a idade minima\n");
    }else if (eleitor17(idade))
    {
        printf("vc e um eleitor facultativo menor de idade\n");
    }else if (eleitor18(idade))
    {
        printf("vc e um eleitor obrigatorio\n");
    }else
    {
        printf("vc e um eleitor facultativo maior de idade\n");
    }
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}