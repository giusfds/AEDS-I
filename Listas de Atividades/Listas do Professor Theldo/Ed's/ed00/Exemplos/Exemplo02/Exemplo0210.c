// ------------------------------------ EXEMPLO0210
// bibliotecas de funcoes auxiliares
#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
#include <math.h> // para operacoes matematicas
int main ( )
{
// PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
// CONSTANTE:
 const double PI = 3.14;
// VARIAVEIS:
 double ARCO = 0.0,
 COSSENO = 0.0,
 SENO = 0.0,
 TANGENTE = 0.0;
// identificar
 printf ( "EXEMPLO0210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
 printf ( "\nFORNECER O VALOR DO SENO: " );
 scanf ( "%lf", &SENO );
 getchar( ); // limpar a entrada de dados
 COSSENO = sqrt( 1.0 - pow(SENO,2) ); // raiz quadrada
 TANGENTE = SENO / COSSENO;
 ARCO = atan( TANGENTE ); // arcotangente
 printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI) );
// encerrar
 printf ( "\n%s\n", "APERTAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
} // end main ( )