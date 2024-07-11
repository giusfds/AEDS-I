// -------------------------- EXEMPLO0909
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA ALTERAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P;
 int X = 0;
 FILE *A;
// identificar
 printf ( "EXEMPLO0909 - ALTERAR COORDENADAS DE PONTOS \n" );
 A = fopen( "PONTOS2.DAT", "r+b" );
 for ( X = 1; X <= 2; X++ )
 {
 fseek ( A, (X-1)*sizeof(PONTOS), SEEK_SET ); // o primeiro e' zero
 fread ( &P, sizeof(PONTOS), 1, A );
 printf ( "\nATUAL %d : %6.2Lf %6.2Lf %6.2Lf\n", X, P.X, P.Y, P.Z );
 printf ( "\nENTRE COM AS NOVAS COORDENADAS DO PONTO : \n" );
 scanf ( "%lf%lf%lf", &P.X, &P.Y, &P.Z );
 getchar( ); // para limpar a entrada de dados
 fseek ( A, (X-1)*sizeof(PONTOS), SEEK_SET );
 fwrite ( &P, sizeof(PONTOS), 1, A );
 } // FIM REPETIR
 fclose(A);
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )