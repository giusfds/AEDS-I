#include "io.h"
#include "Giuseppe.h"

bool letter(char* palavra){
    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (isLetter(palavra[i]))
        {
            return false; //nao e correta    
        }
    }
    return true;
}

int main() {

    // clear();
    id("exemplo 03E2 - Programa - v0.0");

    char  *palavra;

    palavra = IO_readstring ("qual e a string que vc quer ");


    if (letter(palavra))
    {
        print("a sequencia contem apenas simbolos\n");
    }else
    {
        print("a sequencia nao contem apenas simbolos\n");
    }
    
    
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}