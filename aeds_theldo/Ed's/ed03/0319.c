#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0319 - Programa - v0.0");

    int numVezes=0,cont=0;
    double a=0, b=0, numeros[numVezes];

    a = readdouble("qual e o primeiro valor que vc quer: ");/*lendo valores*/
    b = readdouble("qual e o segundo valor que vc quer: ");/*lendo valores*/

    if (a>b)
    {
        print("o valor A e menor do que B\n");
        print("ERRO\n");
    }else
    {
        numVezes = readint("quais sao os valores a serem testados: ");/*lendo valores*/
        for (int i = 0; i < numVezes; i++)
        {
            numeros[i]= readint("qual e o valor que vc quer ler: ");/*lendo valores*/
        }
        for (int i = 0; i < numVezes; i++)
        {
            if ( ((int)numeros[i]%2==0) and (a < numeros[i] and numeros[i] < b))
            {
                print("[%.2lf] pertence ao intervalo\n");
            }   
            cont++;
        }
        print("foram [%d] vezes que o valor entrou em todos os parametros\n",cont);   
    }

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}