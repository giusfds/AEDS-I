// -------------------------- EXEMPLO0707
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h>
typedef int VETOR[3]; // X,Y,Z
int main ( void )
{
// PROGRAMA PARA AVALIAR O COMPRIMENTO DE UM VETOR
// VARIAVEIS :
 VETOR V;
 int X = 0 ;
 double SOMA = 0.0;
// identificar
 printf ( "EXEMPLO0707 - COMPRIMENTO DE UM VETOR\n" );
 printf ( "\nFORNECER O VALOR DE X : " );
 scanf ( "%d", &V[0] );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\nFORNECER O VALOR DE Y : " );
 scanf ( "%d", &V[1] );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\nFORNECER O VALOR DE Z : " );
 scanf ( "%d", &V[2] );
 getchar ( ); // para limpar a entrada de dados
 SOMA = 0.0;
// REPETIR PARA CADA POSICAO
 for( X = 0; X < 3; X++ )
 SOMA = SOMA + V[ X ]*V[ X ];
 printf ( "\nCOMPRIMENTO = %lf", sqrt( SOMA ) );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )