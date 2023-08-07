// -------------------------- EXEMPLO1006
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
REF_CELULA NEW_CELULA ( int INICIAL )
{
 REF_CELULA P; // APONTADOR PARA CELULA
 P = calloc ( 1, sizeof(CELULA) ); // OUTRA FORMA DE RESERVAR
 P->VALOR = INICIAL; // OUTRA NOTACAO
 P->LINK = NULL;
 return ( P );
} // fim funcao NEW_CELULA ( )
int main ( void )
{
// PROGRAMA PARA DEFINIR E MONTAR CELULA DE DADOS
// DADOS:
 REF_CELULA P = NEW_CELULA ( 0 ); // APONTADOR PARA CELULA
// identificar
 printf ( "EXEMPLO1006 - MONTAR CELULA \n" );
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
