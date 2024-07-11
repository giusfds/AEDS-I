// -------------------------- EXEMPLO0110
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
// definicao de variavel caractere
 char N = '\n'; // mudar de linha
// identificar
 printf ( "\n%s\n", "EXEMPLO0106 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n%s\n", "MATRICULA: ______ ALUNO : __________________" );
 printf ( "%c%s" , N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i", N, "INTEIRO : " , I );
 printf ( "%c%s%f", N, "REAL : " , X );
 printf ( "%c%s%f", N, "REAL : " , PI );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
