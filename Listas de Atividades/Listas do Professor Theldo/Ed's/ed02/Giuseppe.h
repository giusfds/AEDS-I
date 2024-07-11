// Todos os direitos da biblioteca reservados para Giuseppe Sena Coridero
// aluno da PUC Minas
// All library rights reserved for Giuseppe Sena Coridero,
// PUC Minas student.

//libraries
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

// global variables
bool trace   = true;             // inicialmente habilitado

// resets
#define  print         printf    // melhor: print
#define  scan          scanf     // melhor: scan

//define end, or and not
#define AND &&
#define OR ||
#define NOT !

//some colors to terminals
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"
#define BOLD "\033[1m"


//Function to check if the number is bigger than 0
double checkNumber(){
    double x=0;
    print("\nInsira um numero: ");
    scan("%d",x);
    getchar();
    if (x<=0)
    {
        print("o numero tem que ser maio que 0\n");
    }else{
        return x;
    }

} //end

//Function to clean stdin
void flush ( )
{
    int  x = 0;
    do { x = getchar( ); } while ( x != EOF && x != '\n' );
    clearerr ( stdin );
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

// Selection Sort para Inteiros em ordem Crescente
void SelectionSort(int* array, int arrayLength) {
	for (int i = 0; i < arrayLength - 1; i++) {
		int menor = i;
		for (int j = i + 1; j < arrayLength; j++) {
			if (array[menor] > array[j]) menor = j;
		}
		int swap	 = array[menor];
		array[menor] = array[i];
		array[i]	 = swap;
	}
}// end

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

//Function only to identify
void id ( const char * const text )
{
    print ( "%s\n", text );
    print ( "%s\n", "Autor: Giuseppe Sena Cordeiro - 801779" );
    print ( "\n" );          
} //end

// Function to clear terminal
void clear() {
	system("cls");
} // end

//toUper and toLower
void toUpper(char* string) {
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] >= 'a' AND string[i] <= 'z') {
			string[i] -= 32;
		}
	}
}
char toLower(char c) {
	if (c >= 'A' AND c <= 'Z') return c += 32;
	return c;
} //end

//Function to read numbers 
int readint ( const char * const text )
{
    int x = 0;
    if ( trace )
       print ( "%s", text   );
    scan  ( "%d", &x );
    flush  ( );
    return    ( x );
}
double readdouble ( const char * const text )
{
    double x = 0.0;
    if ( trace )
       print ( "%s", text);
    scan( "%lf", &x );
    flush( );
    return( x );
}
float readfloat ( const char * const text )
{
    float x = 0.0;
    if ( trace )
       print ( "%s", text   );
    scan  ( "%f", &x );
    flush  ( );
    return    ( x );
} 
bool readbool ( const char * const text )
{
    int x = 0;
    if ( trace )
       print ( "%s", text   );
    scan  ( "%d", &x );
    flush  ( );
    return    ( x!=0 );
}
char readchar ( const char * const text )
{
    char x = '0';
    if ( trace )
       print ( "%s", text   );
    do { x = getchar( ); } while ( '\n' == x ); flush  ( );
    return ( x );
} //end