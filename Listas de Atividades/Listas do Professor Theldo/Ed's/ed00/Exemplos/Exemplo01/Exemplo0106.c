// EXEMPLO0106
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#define PI 3.1415 // definicao de macro (nome para substituir constante global)
int main ( )
{
// identificar
 printf ( "\n%s\n", "EXEMPLO0106 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n%s\n", "MATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", PI ); // emprego de macro
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )