// ------------------------------------ EXEMPLO0208
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
// VARIAVEIS:
 float D = 0.0,// Distancia
T = 0.0, // Tempo
V = 0.0;// Velocidade
// identificar
 printf ( "EXEMPLO0208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%f", &D );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%f", &T );
 getchar( ); // limpar a entrada de dados
 V = D / T;
 printf ( "\nV = D / T = %f%s", V, " m/s " );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )