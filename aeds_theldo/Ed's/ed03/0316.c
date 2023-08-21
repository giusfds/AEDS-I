#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0316 - Programa - v0.0");

    chars palavra;
    int cont=0;
    palavra = IO_readchar("qual e a palavra que vc quer ver: ");

    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (NOT isAlphaNum){
            print("%s nao e um caractere alpha numerico\n", palavra[i]);
            cont++;
        }else{
            print("%c e um caractere alpha numerico \n", palavra[i]);
        } 
    }

    print("a palavra contem %d caracteres diferentes de isAlphaNumeric\n");

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}