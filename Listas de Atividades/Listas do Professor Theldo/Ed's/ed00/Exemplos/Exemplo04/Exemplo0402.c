// -------------------------- EXEMPLO0402
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0, CONTADOR = 0;
// identificar
 printf ( "EXEMPLO0402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 CONTADOR = 1;
 while( CONTADOR <= N )
 {
 printf ( "\n%d", CONTADOR );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= N )
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
