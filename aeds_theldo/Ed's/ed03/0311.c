#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0311 - Programa - v0.0");

    char palavra[80];
    int contador=0;

    printf("Qual e a palavra que voce quer ler: ");
    scanf("%79s", palavra);
    getchar();

    for (int i = 0; i < strlen(palavra); i++)
    {
        if(isUpperCase(palavra[i]))
        {
            contador ++;
        }
        
    }
    
    print("%d\n",contador);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}