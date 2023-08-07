// ------------------------------------ EXEMPLO0204
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
// VARIAVEL:
 char X [10];
// identificar
 printf ( "EXEMPLO0204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", X ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nFOI DIGITADO: %s", X );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )