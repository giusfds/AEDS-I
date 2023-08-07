// ------------------------------------ EXEMPLO0209
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // para lidar com caracteres
int main ( )
{
// PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA
// CONSTANTE:
 const char SENHA[5] = "XXXX";
// VARIAVEL:
 char S [10];
// identificar
 printf ( "EXEMPLO0209 - COMPARAR CARACTERES COM UMA SENHA" );
 printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
 scanf ( "%s", S ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );
// strcmp(S1,S2) compara S1 com S2
// igual a 0: S1 = S2 => 1 ( verdadeiro )
// diferente: S1 <> S2 => 0 ( falso )
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )
