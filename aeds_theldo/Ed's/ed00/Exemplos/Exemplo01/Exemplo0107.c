// EXEMPLO0107
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// definicao de constante (local)
 const float PI = 3.14; // com nome e tipo (melhor)
// identificar
 printf ( "\n%s\n", "EXEMPLO0107 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n%s\n", "MATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", PI ); // constante real
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
