// -------------------------- EXEMPLO0408
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
// VARIAVEL :
 int X = 0;
// identificar
 printf ( "EXEMPLO0408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
 printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X != 0 ) // REPETIR
 {
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 } // ENQUANTO X DIFERENTE DE ZERO
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )