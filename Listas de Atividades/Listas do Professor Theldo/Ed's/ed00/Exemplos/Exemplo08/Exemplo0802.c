// -------------------------- EXEMPLO0802
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
int main ( void )
{
// PROGRAM PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 PONTOS P1, P2;
 double D = 0.0;
// identificar
 printf ("EXEMPLO0802 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P1.X, &P1.Y, &P1.Z );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P2.X, &P2.Y, &P2.Z );
 getchar ( ); // para limpar a entrada de dados
 D = sqrt ( pow(P2.X-P1.X, 2.0) +
 pow(P2.Y-P1.Y, 2.0) +
 pow(P2.Z-P1.Z, 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
