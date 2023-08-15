#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 02E1 - Programa - v0.0");

    char x=0,y=0,z=0;

    x =readchar("qual e a letra de x ");;
    y =readchar("qual e a letra de y ");;
    z =readchar("qual e a letra de z ");;

    if (x==y or x==z or z==y )
    {
        print("coloque numero diferentes\n");
    }else 
    {
        if (y > x)
        {
            if ((x < z) and (z < y))
            {
                print ("%c ta entre %c e %c", z, x, y);
            }
            else
            {
                print ("%c nao ta entre %c e %c", z, x, y);
            }
        }
        else if (y < x)
        {
            if ((y < z) and (z < x ))
            {
                print ("%c ta entre %c e %c", z, y, x);
            }
            else
            {
                print ("%c nao ta entre %c e %c", z, y, x);
            }
        }
    }
    
    


    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}