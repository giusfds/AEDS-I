// -------------------------- EXEMPLO0703
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
typedef int TABELA[10];
int main ( void )
{
// PROGRAMA PARA CALCULAR A MEDIA DE UMA TABELA DE INTEIROS
// VARIAVEIS :
 TABELA V;
 float MEDIA = 0.0;
 int X = 0 ,
 SOMA = 0 ;
// identificar
 printf ( "EXEMPLO0703 - MEDIA DE UMA TABELA DE 10 INTEIROS\n" );
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 {
 printf ( "\nFORNECER O %do. INTEIRO : ",(X+1) );
 scanf ( "%d", &V[ X ] );
 getchar ( ); // para limpar a entrada de dados
 } // FIM REPETIR
 SOMA = 0;
// REPETIR PARA CADA POSICAO
 for ( X = 0; X < 10; X++ )
 SOMA = SOMA + V[ X ];
 MEDIA = SOMA / 10.0;
 printf ( "\nMEDIA = %f\n", MEDIA );
// encerrar
 printf ( "\n\nAPERTAR <Enter> PARA TERMINAR" );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )