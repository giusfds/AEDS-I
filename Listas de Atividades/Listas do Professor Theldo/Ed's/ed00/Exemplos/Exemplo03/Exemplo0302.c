// ------------------------------------ EXEMPLO302
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
// VARIAVEL:
 float X = 0.0;
 printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 if( X != 0.0 )
 printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa