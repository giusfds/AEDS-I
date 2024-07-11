// -------------------------- EXEMPLO0609
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // para strlen()
typedef char STRING30[30];
int PROCURAR
 ( char LETRA, STRING30 S, int POSICAO )
{
// DADO :
 int R = 0;
 if ( POSICAO <= strlen(S) )
 if ( S [ POSICAO ] == LETRA )
 R = POSICAO + 1; // a primeira posicao e' 0 !
 else
 R = PROCURAR ( LETRA,S,POSICAO+1 );
 else
 R = 0;
 return ( R );
} // fim funcao PROCURAR ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA PROCURAR UMA LETRA
// DADO :
 char L = '_';
 STRING30 S = "" ;
// identificar
 printf ( "EXEMPLO0609 - POSICAO DE UMA LETRA EM UMA SENTENCA\n" );
 printf ( "\nFORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : " );
 gets ( S );
 printf ( "\nFORNECER UMA LETRA PARA SER PROCURADA : " );
 L = getchar ( );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\nRESPOSTA = %d\n", PROCURAR ( L,S,0 ) );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )