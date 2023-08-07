// -------------------------- EXEMPLO0901
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { double X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA GRAVAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE *A;
// identificar
 printf ( "EXEMPLO0901 - GRAVAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS1.TXT", "wt" );
 for ( X = 1; X <= 2; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE UM PONTO : \n" );
 scanf ( "%lf%lf%lf", &P.X, &P.Y, &P.Z );
 getchar ( ); // para limpar a entrada de dados
 fprintf ( A, "%lf %lf %lf\n", P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose ( A );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )