// -------------------------- EXEMPLO0905
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { double X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA COPIAR O ARQUIVO COM COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE *A1, *A2;
// identificar
 printf ( "EXEMPLO0905 - COPIAR COORDENADAS DE PONTOS \n" );
 A1 = fopen ( "PONTOS1.TXT", "rt" );
 A2 = fopen ( "NOVO1.DAT" , "wb" );
 for ( X = 1; X <= 2; X++ )
 {
 fscanf ( A1, "%lf%lf%lf\n", &P.X, &P.Y, &P.Z );
 fwrite ( &P, sizeof(PONTOS), 1, A2 );
 printf ( "\nCOPIADO %d : %6.2lf %6.2lf %6.2lf\n", X, P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose ( A1 );
 fclose ( A2 );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )