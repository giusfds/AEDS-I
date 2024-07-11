#include "Giuseppe.h"

int main() {

    clear();
    id("exercicio 12");

    int meses=0;
    double imovel=0.0, entrada=0.0, parcela=0.0, tot=0.0, aux=0.0;

    imovel = readdouble("digite o valor do imovel: ");

   if( imovel >= 100000 )
    {
        do
        {

            entrada = readdouble("digite o valor da entrada: ");


            if (entrada < 0.2*imovel OR entrada > 0.75*imovel)
            {
                printf("valor indisponivel para a entrada\n");
            }
            
        }while(entrada < 0.2*imovel OR entrada > 0.75*imovel);


        do
        {
            meses = readdouble("qual a quantidade de meses a serem pagos:");
            

            if( meses < 60 OR meses > 360 )
            {
                printf("qauntidade de meses indisponivel\n");
            }

        } while ( meses < 60 OR meses > 360 );
        
     
        aux = imovel - entrada;
     

        parcela = aux/meses;

        printf("o valor da primeira parcela eh %.2lf\n", parcela);

        for(int i=1; i<=meses; i++)
        {
            tot=tot+parcela;


            if( i % 12==0 )
            {
                parcela = parcela + parcela * 0.1;
            }
        }
     
        double resultado = tot+entrada;
     
        printf("o valor total das parcelas eh %.2lf\n", tot);
    
        printf("o valor total que sera pago %.2lf\n", resultado);
    }else
   {
        printf("o imovel nao entra nos valores certos\n");
   }

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}