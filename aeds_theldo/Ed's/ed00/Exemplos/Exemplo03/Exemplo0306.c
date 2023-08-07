// ------------------------------------ EXEMPLO306
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
// VARIAVEIS:
 double X=0.0, Y=0.0;
 printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%lf", &Y );
 getchar( ); // limpar a entrada de dados
 if( ! (X == Y) )
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }
 else
 {
 printf ( "VALORES IGUAIS" );
 } // if VALORES DIFERENTES
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
