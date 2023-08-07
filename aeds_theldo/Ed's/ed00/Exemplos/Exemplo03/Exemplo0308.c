// ------------------------------------ EXEMPLO308
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
// PROGRAMA PARA LER E TESTAR UMA LETRA
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
 printf ( "\nFORNECER UMA LETRA QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= 'A' && X <= 'Z' )
 printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
 else
 if( X >= 'a' && X <= 'z' )
 printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
 else
 printf ( "NAO FOI DIGITADA UMA LETRA" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // fim do programa
