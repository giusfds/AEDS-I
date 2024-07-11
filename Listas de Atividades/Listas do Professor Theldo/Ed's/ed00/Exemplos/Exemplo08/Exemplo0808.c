// -------------------------- EXEMPLO0808
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef double VETOR1[3];// X, Y, Z
typedef VETOR1 VETOR [2];
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 VETOR P;
 double D = 0.0;
 printf ( "EXEMPLO0808 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P[0][0], &P[0][1], &P[0][2] );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 getchar ( ); // para limpar a entrada de dados
 scanf ( "%lf %lf %lf", &P[1][0], &P[1][1], &P[1][2] );
 D = sqrt( pow(P[1][0]-P[0][0], 2.0) +
 pow(P[1][1]-P[0][1], 2.0) +
 pow(P[1][2]-P[0][2], 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )