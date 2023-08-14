#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0219 - Programa - v0.0");

    int x,y,z;

    x=IO_readint("qual e o valor de X ");
    y=IO_readint("qual e o valor de Y ");
    z=IO_readint("qual e o valor de Z ");

    if (x==y and x==z)
    {
        print("os numero sao iguais\n");
    }else
    {
        if (x<y and y>z)
        {
            print("o valor (Y) esta no meio dos dois numeros\n");
        }else
        {
            print("o valor de (Y) nao esta presente entre (X) e (Z)\n");
        }
        
        
    }
    
    

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}