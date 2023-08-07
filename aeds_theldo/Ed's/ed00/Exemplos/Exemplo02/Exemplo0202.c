// ------------------------------------ EXEMPLO0202
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL
// VARIAVEL:
 float X = 0.0;
// identificar
 printf ( "EXEMPLO0202 - LER E IMPRIMIR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %f", X );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
