// -------------------------- EXEMPLO0907
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { double X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA ACRESCENTAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE *A;
// identificar
 printf ( "EXEMPLO0907 - ACRESCENTAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS1.TXT", "at" );
 for( X = 1; X <= 2; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE OUTRO PONTO : \n" );
 scanf ( "%lf%lf%lf", &P.X, &P.Y, &P.Z );
 getchar ( ); // para limpar a entrada de dados
 fprintf ( A, "%Lf %Lf %Lf", P.X, P.Y, P.Z );
 fprintf ( A, "%s", "\n" );
 } // FIM REPETIR
 fclose ( A );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
