#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 7");

    double a=0.0, b=0.0, c=0.0, cos;
    a = readdouble("qual e o primeiro valor: ");
    b = readdouble("qual e o segundo  valor: ");
    c = readdouble("qual e o terceiro valor: ");

    if(a > fabs(b-c)){
        if(a>b AND a>c){
            cos = ((b*b)+(c*c)-(a*a))/2*b*c;
            if (cos > 0){
                printf("Triangulo Acutangulo.\n");
            } else if(cos<0){
                printf("Triangulo Obtusangulo.\n");
            } else {
                printf("Triangulo Reto.\n");
            }
        } else if(b>a AND b>c){
            cos = ((a*a)+(c*c)-(b*b))/2*a*c;
            if (cos > 0){
                printf("Triangulo Acutangulo.\n");
            } else if(cos<0){
                printf("Triangulo Obtusangulo.\n");
            } else {
                printf("Triangulo Reto.\n");
            }
        } else if(c>a AND c>b){
            cos = ((a*a)+(b*b)-(c*c))/2*a*b;
            if (cos > 0){
                printf("Triangulo Acutangulo.\n");
            } else if(cos<0){
                printf("Triangulo Obtusangulo.\n");
            } else {
                printf("Triangulo Reto.\n");
            }
        }
        if(a == b AND a==c){
            printf("Triangulo Equilatero.");
        } else if(a == b OR a ==c OR c == b){
            printf("Triangulo Isosceles.");
        } else {
            printf("Triangulo Escaleno.");
        }
    }

    
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}