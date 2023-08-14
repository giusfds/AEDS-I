// Todos os direitos da biblioteca reservados para Giuseppe Sena Coridero
// aluno da PUC Minas
// All library rights reserved for Giuseppe Sena Coridero,
// PUC Minas student.

//bibliotecas
#include <stdio.h>     // para entradas e saidas
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo
#include <wchar.h>     // para 16-bit characters
#include <iso646.h>    // para and, or, xor, not alternatives
#include <locale.h>    // para aceitar teclados padroes PT-BR

// variaveis globais
bool trace   = true;             // inicialmente habilitado

// redefinicoes
#define  print         printf    // melhor: print


//Function to check if the number is bigger than 0
double checkNumber(){
    double x=0;
    print("\nInsira um numero: ");
    scanf("%d",x);
    getchar();
    if (x<=0)
    {
        print("o numero tem que ser maio que 0\n");
    }else{
        return x;
    }

} //end

//Function to check if a number is prime
bool isPrime (int x){
    bool prime=true;
    if (x==0 || x==1){
        prime=false;
    }
    else{
        for (int i=2; i<=x/2; i++){
            if (x%i==0) prime=false;
        }
    }
    return prime;
} //end

//Function to bubble sort the numbers in arrays
void bubbleSort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        print("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            print("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
} //end

//Function to print the arrays
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++){
        print("%d ", arr[i]);
    }
    print("\n");
} //end

//Function to end the program
void pause ( const char * const text )
{
    char x = '0';
    if ( trace )
    {
       print ( "\n%s\n", text );
       do { x = getchar( ); } while ( '\n' != x );
    } 
} //end

