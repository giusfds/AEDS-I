// -------------------------- EXEMPLO0401
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
 printf ( "EXEMPLO0401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
 printf ( "\n" ); // mudar de linha
 CONTADOR = 1;
 while( CONTADOR <= 3 ) // REPETIR
 {
 printf ( "\n" ); // mudar de linha
 printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= 3 )
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )

