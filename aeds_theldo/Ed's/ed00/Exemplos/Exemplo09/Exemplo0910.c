// -------------------------- EXEMPLO0910
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { double X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA LER ARQUIVO DE PONTOS DIRETAMENTE
// DADOS:
 PONTOS P;
 int X = 0;
 FILE *A;
// identificar
 printf ( "EXEMPLO0910 - LER ARQUIVO DE PONTOS DIRETAMENTE \n" );
 A = fopen ( "PONTOS2.DAT", "r" );
 for ( X = 2; X > 0; X-- )
 {
 fseek ( A, (X-1) * sizeof (PONTOS), SEEK_SET ); // o primeiro e' zero
 fread ( &P, sizeof(PONTOS), 1, A );
 printf ( "\nPONTO %d : %6.2lf %6.2lf %6.2lf\n", X, P.X, P.Y, P.Z );
 } // FIM REPETIR
 fclose( A );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )