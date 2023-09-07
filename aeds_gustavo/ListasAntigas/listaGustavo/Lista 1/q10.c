#include <stdio.h>
#include <math.h>

int main() {

    double a=0, b=0, c=0;
    double delta=0, raizPositiva=0, raizNegativa=0, Xv=0, Yv=0;

    printf("qual e o valor de A\n");
    scanf("%lf", &a);
    printf("qual e o valor de B\n");
    scanf("%lf", &b);
    printf("qual e o valor de C\n");
    scanf("%lf", &c);

    delta = pow (b, 2) - 4 * a * c; //(B)

    raizPositiva = (- b + sqrt(delta))/2 * a; //raiz positiva
    raizNegativa = (- b - sqrt(delta))/2 * a; //raiz negativa

    Xv = -b / 2 * a;

    Yv = - delta / 4 * a;

    if ( a < 0 )
    {
        /* a parábola possui ponto de máximo */
        printf("a parábola possui ponto de máximo = %.2lf, %2.lf\n", Xv, Yv);

    }else if ( a > 0 )
    {
        /* a parábola possui ponto de mínimo */
        printf("a parábola possui ponto de mínimo = %.2lf, %2.lf\n", Xv, Yv);

    }
    

    printf("a resposta das perguntas:\n");
    printf("a) ???\n");
    printf("b) %.2lf\n", delta);
    printf("c) valor positivo = %.2lf; valor negativo = %.2lf\n", raizPositiva, raizNegativa);
    printf("d) Xv =  %.2lf; Yv = %.slf\n", Xv, Yv);
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}