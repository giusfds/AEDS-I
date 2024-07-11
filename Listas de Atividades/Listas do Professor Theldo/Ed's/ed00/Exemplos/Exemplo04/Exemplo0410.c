// -------------------------- EXEMPLO0410
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
// identificar
 printf ( "EXEMPLO0410 - LER UM INTEIRO NAO NULO\n" );
 do // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 }
 while( X == 0 ); // ATE' X DIFERENTE DE ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )