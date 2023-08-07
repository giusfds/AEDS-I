// -------------------------- EXEMPLO1010
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef
struct S_CELULA { int VALOR; struct S_CELULA *LINK; }
CELULA;
typedef struct S_CELULA * REF_CELULA;
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
 REF_CELULA P1 = NULL; // APONTADOR ESTRUTURAL
 REF_CELULA P2 = NULL; // APONTADOR DE SERVICO
 int x = 0, y = 0;
// identificar
 printf ( "EXEMPLO1010 - MONTAR CELULAS \n" );
 printf ( "VALOR = " );
 scanf ( "%d", &x ); getchar ( );
 P1 = NEW_CELULA ( x ); // montar o primeiro
 for ( y=0; y<4; y=y+1 )
 {
 printf ( "VALOR = " );
 scanf ( "%d", &x ); getchar ( );
 P2 = P1; // comecar no primeiro
 while ( P2->LINK != NULL ) // procurar o ultimo
 P2 = P2->LINK;
 P2->LINK = NEW_CELULA ( x ); // anexar mais outro
 } // end for
 P2 = P1; // comecar no primeiro
 while ( P2 != NULL )
 { // mostrar valor
 printf ( "VALOR = %d LINK = %p\n", P2->VALOR, P2->LINK );
 P2 = P2->LINK; // passar ao proximo
 } // end while
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )