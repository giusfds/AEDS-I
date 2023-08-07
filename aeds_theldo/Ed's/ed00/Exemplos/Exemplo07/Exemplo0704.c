// -------------------------- EXEMPLO0704
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // para strlen()
typedef char STRING10[10];
int main ( void )
{
// PROGRAMA PARA LER UMA PALAVRA
// VARIAVEIS :
 STRING10 PALAVRA;
 int X = 0;
// identificar
 printf ( "EXEMPLO0704 - LER UMA PALAVRA\n" );
 printf ( "\nFORNECER UMA PALAVRA (NO MAXIMO 09 LETRAS) : " );
 gets ( PALAVRA );
 printf ( "\nLETRAS DA PALAVRA LIDA : " );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < strlen( PALAVRA ); X++ )
 printf ( "%c ", PALAVRA[ X ] );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )