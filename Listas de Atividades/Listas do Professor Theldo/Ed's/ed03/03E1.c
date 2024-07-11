#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 03E1 - Programa - v0.0");

    char palavra[80], charEspeciais[80];
    int cont=0;

    print("qual e a palavra que vc quier ler e saber os caracteres \n");
    scan("%78s", palavra);
    getchar();
    getchar();

    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (NOT isAlphaNum(palavra[i]))
        {
            charEspeciais[cont] = palavra[i];
            cont++;
        }
        
    }

    charEspeciais[cont] = '\0';

    print("os caracteres diferentes sao %s\n",charEspeciais);
    

    pause ( "Apertar ENTER para terminar" );
    // clear();
    return 0;
}