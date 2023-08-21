#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0320 - Programa - v0.0");

    int numVezes=0,cont=0;
    double a=0, b=0;

    a = readdouble("qual e o primeiro valor que vc quer: ");/*lendo valores*/
    b = readdouble("qual e o segundo valor que vc quer: ");/*lendo valores*/

    if (NOT( (0 < a AND a < 1) AND (0 < b AND b < 1) ))
    {
        print("ERRO\n");
        print("valores nao estao no intervalo de 0 e 1\n");
    }else
    {
        numVezes = readint("quais sao os valores a serem testados: ");/*lendo valores*/
        double numeros[numVezes];
        for (int i = 0; i < numVezes; i++)
        {
            numeros[i]= readint("qual e o valor que vc quer ler: ");/*lendo valores*/
        }
        for (int i = 0; i < numVezes; i++)
        {
            if(NOT(a < numeros[i] AND numeros[i] < b))
            {
                print("[%.2lf] nao pertence ao intervalo\n", numeros[i]);
            }
            cont++;
        }
        print("foram [%d] vezes que o valor entrou em todos os parametros\n",cont);   
    }
    
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}