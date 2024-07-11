// -------------------------- EXEMPLO0608
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para definicoes logicas
#include <string.h> // para strlen()
typedef char STRING30 [30];
bool PROCURAR
 ( char LETRA, STRING30 S, int POSICAO )
{
// DADO :
 bool R = false;
 if ( POSICAO <= strlen( S ) )
 R = ( S [ POSICAO ] == LETRA) || PROCURAR ( LETRA,S,POSICAO+1 );
 else
 R = false;
 return ( R );
} // fim funcao PROCURAR ( )
int main ( void )
{
// PROGRAMA RECURSIVO PARA ACHAR A POSICAO DE UMA LETRA
// DADO :
 char L = '_';
 STRING30 S = "";
// identificar
 printf ( "EXEMPLO0608 - PROCURAR UMA LETRA EM UMA SENTENCA\n" );
 printf ( "\nFORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : " );
 gets ( S );
 printf ( "\nFORNECER UMA LETRA PARA SER PROCURADA : " );
 L = getchar ( );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\nRESPOSTA = %d\n", PROCURAR( L,S,0 ) );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )