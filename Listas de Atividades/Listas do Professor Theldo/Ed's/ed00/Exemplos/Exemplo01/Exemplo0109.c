// -------------------------- EXEMPLO0109
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// definicao de constante
 const float PI = 3.14;
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
// identificar
 printf ( "\n%s\n", "EXEMPLO0109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n%s\n", "MATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I );
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
