// EXEMPLO0103
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
// metodo para uso local
 void clrscr ( ) { system ( "cls" ); } // para Windows
// void clrscr ( ) { system ( "clear" ); } // para Linux
int main ( )
{
// identificar
 printf ( "\n%s\n", "EXEMPLO0103 - PRIMEIRO EXEMPLO EM C" );
 // (dependente do sistema operacional)
 clrscr ( ); // para limpar a tela
 printf ( "\n%s\n", "MATRICULA: ______ ALUNO : __________________" );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )