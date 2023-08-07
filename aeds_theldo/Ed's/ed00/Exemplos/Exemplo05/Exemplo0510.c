// -------------------------- EXEMPLO0510
// bibliotecas de funcoes auxiliares
#include "my_def.h" // para definicoes globais, constantes ...
#include "my_lib.h"
int main ( void )
{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS
// VARIAVEIS :
 chars text = "MUDAR DE LINHA";
// identificar
 println ( "EXEMPLO0510 - USO DE MODULOS" );
 printf ( "%c" , EOL );
 printf ( "%s%c", text, EOL );
// encerrar
 pause ( "PRESSIONAR <Enter> PARA TERMINAR." );
 return ( EXIT_SUCCESS );
} // end main ( )
