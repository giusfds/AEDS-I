// -------------------------- EXEMPLO0406
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
// identificar
 printf ( "EXEMPLO0406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 CONTADOR = 1;
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 }
 while( CONTADOR <= 3 ); // ATE' ( CONTADOR > 3 )
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )