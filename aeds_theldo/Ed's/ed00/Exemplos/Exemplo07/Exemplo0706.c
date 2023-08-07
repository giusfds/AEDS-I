// -------------------------- EXEMPLO0706
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
typedef double POLINOMIO[10+1]; // posicoes de 0:10
int main ( void )
{
// PROGRAMA PARA AVALIAR UM POLINOMIO
// VARIAVEIS :
 POLINOMIO P;
 int Y = 0 , N = 0 ;
 double X = 0.0, PX = 0.0;
// identificar
 printf ( "EXEMPLO0706 - LER COEFICIENTES DE UM POLINOMIO\n" );
 printf ( "\nFORNECER O GRAU DO POLINOMIO : " );
 scanf ( "%d", &N );
 getchar ( ); // para limpar a entrada de dados
// REPETIR PARA CADA POSICAO
 for ( Y = 0; Y <= N; Y++ )
 {
 printf ( "\nFORNECER O %do. COEFICIENTE : ", (Y+1) );
 scanf ( "%lf", &P[ Y ] );
 getchar ( ); // para limpar a entrada de dados
 } // FIM REPETIR
 printf ( "\nFORNECER O PONTO DE AVALIACAO : " );
 scanf ( "%lf", &X );
 getchar ( ); // para limpar a entrada de dados
 PX = 0.0;
// REPETIR PARA CADA POSICAO
// DA ULTIMA ATE' A PRIMEIRA
 for ( Y = N; Y >= 0; Y-- )
 PX = PX * X + P[ Y ];
 printf ( "\nP(%lf) = %lf", X, PX );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )