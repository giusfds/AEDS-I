// -------------------------- EXEMPLO1005
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef
struct S_CELULA { int VALOR; struct S_CELULA *LINK; }
CELULA;
typedef
struct S_CELULA *
REF_CELULA;
int main ( void )
{
// PROGRAMA PARA DEFINIR E MONTAR CELULA DE DADOS
// DADOS:
 REF_CELULA P; // APONTADOR PARA CELULA
 P = calloc ( 1, sizeof(CELULA) ); // OUTRA FORMA DE RESERVAR
 P->VALOR = 0; // OUTRA NOTACAO
 P->LINK = NULL;
// identificar
 printf ( "EXEMPLO1005 - MONTAR CELULA \n" );
 printf ( "VALOR = " );
 scanf ( "%d", &P->VALOR );
 getchar ( );
 printf ( "VALOR = %d LINK = %p\n", P->VALOR, P->LINK );
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )