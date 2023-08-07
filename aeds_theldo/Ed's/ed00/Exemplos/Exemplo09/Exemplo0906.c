// -------------------------- EXEMPLO0906
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
 printf ( "EXEMPLO0906 - ACRESCENTAR COORDENADAS DE PONTOS \n" );
 A = fopen ( "PONTOS2.DAT", "r+b" );
 while( ! feof(A) )
 fread ( &P, sizeof(PONTOS), 1, A ); // LER ATE' O FIM DE ARQUIVO
 fseek ( A, 0L, SEEK_CUR ); // MARCAR A POSICAO
 for ( X = 3; X <= 4; X++ )
 {
 printf ( "\nENTRE COM AS COORDENADAS DE OUTRO PONTO (%d): \n", X );
 scanf ( "%lf%lf%lf", &P.X, &P.Y, &P.Z );
 getchar ( ); // para limpar a entrada de dados
 fwrite ( &P, sizeof(PONTOS), 1, A );
 } // FIM REPETIR
 fseek ( A, 0L, SEEK_SET ); // VOLTAR AO INICIO
 fread ( &P, sizeof(PONTOS), 1, A ); // LER O PRIMEIRO DO ARQUIVO
 while( ! feof(A) )
 {
 printf ( "\nPONTO %d : %6.2lf %6.2lf %6.2lf\n", X, P.X, P.Y, P.Z );
 fread ( &P, sizeof(PONTOS), 1, A ); // LER ATE' O FIM DE ARQUIVO
 } // FIM REPETIR
 fclose ( A );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )