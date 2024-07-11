#include "io.h"
#include "Giuseppe.h"

int main() {

    id("exemplo 0217 - Programa - v0.0");

    int x,y;

    x = IO_readint("qual e o valor de x ");
    y = IO_readint("qual e o valor de y ");

    if (x==0)
    {
        print("o valor e nulo\n");
    }else
    {
        if (x%2==0)
        {
            print("o numero e par\n");
        }else if(x%2!=0){
            print("o numero e impar\n");
        }
        if (x>0)
        {
            print("x e um numero positivo\n");
        }else if (x<0)
        {
            print("x e um numero negativo\n");
        }
    }
    if (y == 0)
    {
        print ("(y) e' um valor nulo");
    }
    else
    {
       if (y % 2 == 0) 
        {
            print ("(y) e' par");
        }
        else if (y % 2 != 0) 
        {
            print ("(y) e' impar");
        }
        if (y > 0)
        {
            print (" e positivo");
        }
        else if (y < 0)
        {
            print (" e negativo");
        }
    }
    
    

    pause ( "Apertar ENTER para terminar" );
    return 0;
}