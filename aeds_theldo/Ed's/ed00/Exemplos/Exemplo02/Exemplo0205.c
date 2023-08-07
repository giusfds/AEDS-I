// ------------------------------------ EXEMPLO0205
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E SOMAR DOIS VALORES INTEIROS
// VARIAVEIS:
 int X=0, Y=0, Z=0;
// identificar
 printf ( "EXEMPLO0205 - LER E SOMAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 Z = X + Y;
 printf ( "\nA SOMA DOS DOIS = %d", Z );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )