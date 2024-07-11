// -------------------------- EXEMPLO0902
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { double X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA LER ARQUIVO DE PONTOS
// VARIAVEIS :
 PONTOS P;
 int X = 0;
 FILE * A ;
// identificar
 printf ( "EXEMPLO0902 - LER ARQUIVO DE PONTOS \n" );
 A = fopen ( "PONTOS1.TXT", "rt" );
 for ( X = 1; X <= 2; X++ )
 {
 fscanf ( A, "%lf%lf%lf", &P.X, &P.Y, &P.Z );
 printf ( "\nPONTO %d : %lf %lf %lf", X, P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose ( A );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
