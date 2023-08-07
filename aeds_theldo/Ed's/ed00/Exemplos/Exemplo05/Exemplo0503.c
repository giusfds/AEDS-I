// -------------------------- EXEMPLO0503
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int X = 0; // VARIAVEL EM CONTEXTO GLOBAL
void P1 ( void )
{
 X = X + 1; // AVANCAR O CONTEXTO
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X );
 printf ( "\n" );
 if ( X < 5 )
 P1 ( ); // CHAMAR O PROCEDIMENTO RECURSIVAMENTE
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
 X = X - 1; // RETORNAR AO CONTEXTO ANTERIOR
 getchar ( ); // para esperar
} // fim procedimento P1( )
int main ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
// identificar
 printf ( "EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );
 X = 0;
 P1 ( ); // OBSERVAR A RECURSIVIDADE !
 printf ( "\n" );
// encerrar
 printf ( "\nAPERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )