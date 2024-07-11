// Todos os direitos da biblioteca reservados para Giuseppe Sena Coridero
// aluno da PUC Minas

// All library rights reserved for Giuseppe Sena Coridero,
// PUC Minas student.

#include <iostream>    // para entradas e saidas
#include <fstream>     // para arquivos
#include <sstream>     // para conversoes
#include <string>      // para cadeias de caracteres
#include <cstdio>      // para entradas e saida
#include <cstdlib>     // para a biblioteca padrao
#include <cstring>     // para cadeias de caracteres
#include <locale>      // para colocar acentos do teclado PT-BR
#include <stddef.h>    // para definicoes basicas
#include <stdarg.h>    // para tratar argumentos
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo
#include <bits/stdc++.h>


//Function to check if the number is bigger than 0
double checkNumeber(){
    int x=0;
    std::cout << "qual e o numero que vc quer" << std::endl;
    std::cin >> x;
    if (x<=0){
        std::cout << "o numero e menor que 0";
    }else{
        return x;
    }
    
}


//Function to check if a number is prime
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
