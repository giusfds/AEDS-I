#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0220 - Programa - v0.0");

    double x=0,y=0,z=0;

    x =readdouble("qual e o valor de x ");
    y =readdouble("qual e o valor de y ");
    z =readdouble("qual e o valor de z ");

    if (x==y or x==z or z==y )
    {
        print("coloque numero diferentes\n");
    }else 
    {
        if (y > x)
        {
            if ((x < z) and (z < y))
            {
                print ("%lf ta entre %lf e %lf", z, x, y);
            }
            else
            {
                print ("%lf nao ta entre %lf e %lf", z, x, y);
            }
        }
        else if (y < x)
        {
            if ((y < z) and (z < x ))
            {
                print ("%lf ta entre %lf e %lf", z, y, x);
            }
            else
            {
                print ("%lf nao ta entre %lf e %lf", z, y, x);
            }
        }
    }
    
    


    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}