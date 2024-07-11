// -------------------------- EXEMPLO0803
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef struct SPONTOS { float X,Y,Z; } PONTOS;
typedef PONTOS VETOR[2];
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 VETOR V;
 double D = 0.0;
// identificar
 printf ( "EXEMPLO0803 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &V[0].X, &V[0].Y, &V[0].Z );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &V[1].X, &V[1].Y, &V[1].Z );
 getchar ( ); // para limpar a entrada de dados
 D = sqrt ( pow(V[1].X-V[0].X, 2.0) +
 pow(V[1].Y-V[0].Y, 2.0) +
 pow(V[1].Z-V[0].Z, 2.0) );
 printf ("\n DISTANCIA = %lf", D );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )