// -------------------------- EXEMPLO0908
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para definicoes logicas
#include <math.h> // para funcoes matematicas
#include <fcntl.h> // para arquivos
typedef struct SPONTOS { double X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAMA PARA PROCURAR COORDENADAS DE PONTOS
// DADOS:
 PONTOS P,
 PROCURADO;
 bool ACHAR = false;
 FILE *A;
// identificar
 printf ( "EXEMPLO0908 - PROCURAR COORDENADAS DE PONTOS \n" );
 printf ( "\nENTRE COM AS COORDENADAS DO PONTO A PROCURAR : \n" );
 scanf ( "%lf%lf%lf", &PROCURADO.X, &PROCURADO.Y, &PROCURADO.Z );
 ACHAR = false;
 A = fopen ( "PONTOS1.TXT", "rt" );
 fscanf ( A, "%lf %lf %lf", &P.X, &P.Y, &P.Z );
 while ( ! feof( A ) && ! ACHAR )
 {
 if ( P.X==PROCURADO.X && P.Y==PROCURADO.Y && P.Z==PROCURADO.Z )
 ACHAR = true;
 fscanf ( A, "%lf%lf%lf", &P.X, &P.Y, &P.Z );
 } // FIM REPETIR
 fclose ( A );
 if ( ACHAR )
 printf ( "\nCOORDENADAS ENCONTRADAS" );
 else
 printf ( "\nCOORDENADAS NAO ENCONTRADAS" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )