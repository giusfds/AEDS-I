// -------------------------- EXEMPLO0507
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
void P1 ( int* X )
{
 *X = *X + 1; // AVANCAR O CONTEXTO NA REFERENCIA
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", *X );
 if ( *X < 5 )
 P1 ( X );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", *X );
 *X = *X - 1; // RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
 getchar ( ); // para esperar
} // fim procedimento P1( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA
// VARIAVEL LOCAL
 int X;
// identificar
 printf ( "EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n" );
 X = 0;
 P1 ( &X ); // OBSERVAR REPETICAO FINITA !
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )