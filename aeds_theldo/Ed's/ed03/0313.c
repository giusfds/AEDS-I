#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0313 - Programa - v0.0");

    char palavra[80];
    int contador;

    for (int i = (int)strlen(palavra); i >= 0 ; i++)
    {
        if ((palavra[i] >= 'A') AND (palavra[i] <= 'Z'))
        {
            print("%c\n",palavra[i]);
            contador++;
        }
        
    }
    
    print("temos [%d] letras maiusculas\n",contador);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}