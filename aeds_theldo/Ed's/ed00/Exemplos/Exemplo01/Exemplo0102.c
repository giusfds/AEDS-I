// EXEMPLO0102
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// identificar
// (dependente do sistema operacional)
 system ( "cls" ); // ( Windows ) para limpar a tela
// system ( "clear" ); // ( Linux ) para limpar a tela
 printf ( "\n%s\n", "EXEMPLO0102 - PRIMEIRO EXEMPLO EM C" );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
