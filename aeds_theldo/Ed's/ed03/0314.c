#include "io.h"
#include "Giuseppe.h"

bool ToUpper(char* palavra){
    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (isUpperCase(palavra[i]))
        {
            return true;
        }
    }
    return false;
}
bool ToAlpha(char* palavra){
    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (isAlphaNum(palavra[i]))
        {
            return true;
        }
    }
    return false;
}
bool ToLower(char* palavra){
    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (isLowerCase(palavra[i]))
        {
            return true;
        }
    }
    return false;
    
}

int main() {

    clear();
    id("exemplo 0314 - Programa - v0.0");

    char *palavra, notAlpha[strMaxLength], toLower[strMaxLength], 
    toUpper[strMaxLength];

    int contadorNAlpha=0, contadorLower=0, contadorUpper=0;

    palavra = IO_readstring("qual e a palavra que vc quer ler: ");

    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (ToAlpha(palavra)/*alpha*/)
        {
            notAlpha[contadorNAlpha] = palavra[i];

            contadorNAlpha++;

        }else if (ToUpper(palavra)/*upper*/)
        {
            toUpper[contadorNAlpha] = palavra[i];

            contadorUpper++;

        }else if (Tolower(palavra)/*lower*/)
        {
            toLower[contadorLower] = palavra[i];

            contadorLower++;

        }  
    }

    print("a palavra inicial e: %s\n", palavra);

    print("os caracteres especiais  sao: %s\n", notAlpha);
    
    print("os caracteres maiusculos sao: %s\n", toUpper);
    
    print("os caracteres minusculos sao: %s\n", toLower);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}