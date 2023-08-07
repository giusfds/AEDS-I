// -------------------------- EXEMPLO0806
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef struct SPONTO { double X,Y,Z; } PONTO ;
typedef double VETOR[3];// X, Y, Z
typedef
 struct SPONTOS
 { PONTO P1; VETOR P2; }
PONTOS;
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 PONTOS P;
 double D = 0.0;
// identificar
 printf ( "EXEMPLO0806 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P.P1.X, &P.P1.Y, &P.P1.Z );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P.P2[0], &P.P2[1], &P.P2[2] );
 getchar ( ); // para limpar a entrada de dados
 D = sqrt ( pow(P.P2[0]-P.P1.X, 2.0) +
 pow(P.P2[1]-P.P1.Y, 2.0) +
 pow(P.P2[2]-P.P1.Z, 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )