#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0220 - Programa - v0.0");

    char x,y,z;

    x =readchar("qual e o caractere correspondente a x ");
    y =readchar("qual e o caractere correspondente a y ");
    z =readchar("qual e o caractere correspondente a z ");

    if (x==y or x==z or z==y )
    {
        print("coloque caractere diferentes\n");
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