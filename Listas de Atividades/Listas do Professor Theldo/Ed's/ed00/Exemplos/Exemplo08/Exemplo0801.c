// -------------------------- EXEMPLO0801
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para funcoes matematicas
typedef
 struct SPONTOS
 {
 double X,Y,Z;
 }
PONTOS;
int main ( void )
{
// PROGRAMA PARA CALCULAR A DISTANCIA ENTRE PONTOS
// DADOS:
 PONTOS P1, P2, P3;
 double D = 0.0;
// identificar
 printf ( "EXEMPLO0801 - DISTANCIA ENTRE PONTOS\n" );
 printf ( "\n ENTRE COM O PRIMEIRO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P1.X, &P1.Y, &P1.Z );
 getchar ( ); // para limpar a entrada de dados
 printf ( "\n ENTRE COM O SEGUNDO PONTO : \n " );
 scanf ( "%lf %lf %lf", &P2.X, &P2.Y, &P2.Z );
 getchar ( ); // para limpar a entrada de dados
 P3.X = P2.X - P1.X;
 P3.Y = P2.Y - P1.Y;
 P3.Z = P2.Z - P1.Z;
 D = sqrt ( pow(P3.X, 2.0) +
 pow(P3.Y, 2.0) +
 pow(P3.Z, 2.0) );
 printf ( "\n DISTANCIA = %lf", D );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )