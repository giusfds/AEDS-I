#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0314 - Programa - v0.0");

    char *palavra;
    int count = 0, tamanho = 0;

    print( "Digite uma palavra: " );
    palavra = IO_readstring ("qual e a string que vc quer ");

    tamanho = strlen(palavra);
    
    for(int i = 0; i < tamanho; i=i+1 ){
        if( isalpha(palavra[i] ) ) {
            if( islower(palavra[i]) )
            {
                print( "O caracter (%c) e minusculo\n" , palavra[i] );
            }else{
                print( "O caracter (%c) e MAIUSCULO\n" , palavra[i] );
            }
            count++;
        }else{
            print( "O caracter (%c) e um simbolo\n" , palavra[i] );
        }      
    }

    print( "\nEm \"%s\" %d caracteres sao letras\n", palavra, count );

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}