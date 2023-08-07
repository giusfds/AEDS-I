// ------------------------------------ EXEMPLO303
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= '0' && X <= '9' )
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 } // if ALGARISMO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa