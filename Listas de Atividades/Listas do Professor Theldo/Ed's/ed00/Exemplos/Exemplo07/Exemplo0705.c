// -------------------------- EXEMPLO0705
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para definicoes logicas
#include <string.h> // para strlen()
typedef char STRING10[10];
int main ( void )
{
// PROGRAMA PARA PROCURAR LETRA EM PALAVRA
// VARIAVEIS :
 STRING10 PALAVRA;
 char LETRA = '_';
 int X = 0 ;
 bool ACHAR = false;
// identificar
 printf ( "EXEMPLO0705 - PROCURAR LETRA EM UMA PALAVRA\n" );
 printf ( "\nDIGITAR UMA PALAVRA (NO MAXIMO 09 LETRAS) : " );
 gets ( PALAVRA );
 printf ( "\nFORNECER A LETRA A SER PROCURADA : " );
 LETRA = getchar ( );
 getchar ( ); // para limpar a entrada de dados
 ACHAR = false;
 X = 0;
// REPETIR PARA CADA POSICAO
 while ( X < strlen( PALAVRA ) && ! ACHAR )
 {
 if( PALAVRA[ X ] == LETRA )
 ACHAR = true;
 else
 X = X + 1;
 } // FIM REPETIR
 if ( ACHAR )
 printf ( "LETRA ENCONTRADA" );
 else
 printf ( "LETRA NAO ENCONTRADA" );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )