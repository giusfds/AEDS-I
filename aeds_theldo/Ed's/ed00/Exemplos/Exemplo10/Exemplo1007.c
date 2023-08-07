// -------------------------- EXEMPLO1007
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
// PROGRAMA PARA DEFINIR E MONTAR CELULAS DE DADOS
// DADOS:
 REF_CELULA P1 = NEW_CELULA ( 0 ); // APONTADOR PARA CELULA
 REF_CELULA P2 = NEW_CELULA ( 0 ); // APONTADOR PARA CELULA
// identificar
 printf ( "EXEMPLO1007 - MONTAR CELULAS \n" );
 printf ( "P1: VALOR = " );
 scanf ( "%d", &P1->VALOR );
 getchar ( );
 printf ( "P2: VALOR = " );
 scanf ( "%d", &P2->VALOR );
 getchar ( );
 printf ( "P1: VALOR = %d LINK = %p\n", P1->VALOR, P1->LINK );
 printf ( "P2: VALOR = %d LINK = %p\n", P2->VALOR, P2->LINK );
 P1->LINK = P2; // ligar uma celula a outra
 printf ( "P1: VALOR = %d LINK = %p\n", P1->VALOR, P1->LINK );
 printf ( "P2: VALOR = %d LINK = %p\n",
 P1->LINK->VALOR, P1->LINK->LINK );
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )