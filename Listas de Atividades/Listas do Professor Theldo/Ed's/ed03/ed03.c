/*
 Exercicios0X - v0.0. - 21 / 08 / 2023
 Author: Giuseppe Sena Cordeiro - 801779

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exercicios0X Exercicios0X.c
 Windows: gcc -o Exercicios0X Exercicios0X.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exercicios0X
 Windows: Exercicios0X
*/


//dependencias
#include "io.h"
#include "Giuseppe.h"


//method's
void method01(){
    clear();
    id("exemplo 0311 - Programa - v0.0");

    char palavra[80];
    int contador=0;

    printf("Qual e a palavra que voce quer ler: ");
    scanf("%79s", palavra);
    getchar();

    for (int i = 0; i < strlen(palavra); i++)
    {
        if(isUpperCase(palavra[i]))
        {
            contador ++;
        }
        
    }
    
    print("%d\n",contador);

    pause ( "Apertar ENTER para terminar" );
}
void method02(){
    clear();
    id("exemplo 0311 - Programa - v0.0");

    char palavra[80];
    int contador=0;

    printf("Qual e a palavra que voce quer ler: ");
    scanf("%79s", palavra);
    getchar();

    for (int i = 0; i < strlen(palavra); i++)
    {
        if(isUpperCase(palavra[i]))
        {
            contador ++;
        }
        
    }
    
    print("%d\n",contador);

    pause ( "Apertar ENTER para terminar" );
}
void method03(){
    clear();
    id("exemplo 0313 - Programa - v0.0");

    char palavra[80];
    int contador;

    for (int i = (int)strlen(palavra); i >= 0 ; i--)
    {
        if ((palavra[i] >= 'A') AND (palavra[i] <= 'Z'))
        {
            print("%c\n",palavra[i]);
            contador++;
        }
        
    }
    
    print("temos [%d] letras maiusculas\n",contador);

    pause ( "Apertar ENTER para terminar" );
}
void method04(){
    clear();
    id("exemplo 0314 - Programa - v0.0");

    char *palavra;
    int count = 0, tamanho = 0;

    print( "Digite uma palavra: " );
    palavra = IO_readstring ("qual e a string que vc quer ");

    tamanho = strlen(palavra);
    
    for(int i = 0; i < tamanho; i=i+1 ){
        if( isalpha(palavra[i] ) ) {
            if( islower(palavra[i]) )
            {
                print( "O caracter (%c) e minusculo\n" , palavra[i] );
            }else{
                print( "O caracter (%c) e MAIUSCULO\n" , palavra[i] );
            }
            count++;
        }else{
            print( "O caracter (%c) e um simbolo\n" , palavra[i] );
        }      
    }

    print( "\nEm \"%s\" %d caracteres sao letras\n", palavra, count );

    pause ( "Apertar ENTER para terminar" );
}
void method05(){
    clear();
    id("exemplo 0315 - Programa - v0.0");

    chars palavra;
    int count=0;
    palavra = IO_readchar("qual e a palavra que vc quer ver: ");

    for (int i = (int)strlen(palavra); i >= 0; i--)
    {
        if (isNumber)
        {
            print("%c\n",palavra[i]);
            count++;
        }
        
    }
    print("os numeros apareceram:[%d] vezes \n");

    pause ( "Apertar ENTER para terminar" );
}
void method06(){
    clear();
    id("exemplo 0316 - Programa - v0.0");

    chars palavra;
    int cont=0;
    palavra = IO_readchar("qual e a palavra que vc quer ver: ");

    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (NOT isAlphaNum){
            print("%s nao e um caractere alpha numerico\n", palavra[i]);
            cont++;
        }else{
            print("%c e um caractere alpha numerico \n", palavra[i]);
        } 
    }

    print("a palavra contem %d caracteres diferentes de isAlphaNumeric\n");

    pause ( "Apertar ENTER para terminar" );
    clear();
}
void method07(){
    clear();
    id("exemplo 0317 - Programa - v0.0");

    int a, b, numVezes, multiplos5[numVezes], cont=0;
    a = readint("qual e o valor inicial do intervalo: ");
    b = readint("qual e o valor  final do intervalo: ");
    numVezes = readint("quantos numeros a serem lidos: ");

    for (int i = 0; i < numVezes; i++)
    {
        multiplos5[i]= readint("qual e o valor que vc quer ler: ");
    }
    
    for (int i = 0; i < numVezes; i++)
    {
        if (multiplos5[i]%5==0 and (a<=multiplos5[i] and multiplos5[i]<=b))
        {
            print("o numero [%d] e multiplo de 5 e pertence ao intervalo [%d,%d]\n", multiplos5[i],a, b);
            cont++;
        }
    }
    print("apareceu [%d] vezes\n",cont);

    pause ( "Apertar ENTER para terminar" );
}
void method08(){
    clear();
    id("exemplo 0318 - Programa - v0.0");

    int a, b, numVezes, multiplos5[numVezes], cont=0;
    a = readint("qual e o valor inicial do intervalo: ");
    b = readint("qual e o valor  final do intervalo: ");
    numVezes = readint("quantos numeros a serem lidos: ");

    for (int i = 0; i < numVezes; i++)
    {
        multiplos5[i]= readint("qual e o valor que vc quer ler: ");
    }
    
    for (int i = 0; i < numVezes; i++)
    {
        if (NOT(multiplos5[i]%5==0) and (a<=multiplos5[i] and multiplos5[i]<=b) and (multiplos5[i]%3 == 0))
        {
            print("o numero [%d] e nao multiplo de 5, e multiplo de 3 e pertence ao intervalo [%d,%d]\n", multiplos5[i],a, b);
            cont++;
        }
    }
    print("apareceu [%d] vezes\n",cont);

    pause ( "Apertar ENTER para terminar" );
}
void method09(){
    clear();
    id("exemplo 0319 - Programa - v0.0");

    int numVezes=0,cont=0;
    double a=0, b=0, numeros[numVezes];

    a = readdouble("qual e o primeiro valor que vc quer: ");/*lendo valores*/
    b = readdouble("qual e o segundo valor que vc quer: ");/*lendo valores*/

    if (a>b)
    {
        print("o valor A e menor do que B\n");
        print("ERRO\n");
    }else
    {
        numVezes = readint("quais sao os valores a serem testados: ");/*lendo valores*/
        for (int i = 0; i < numVezes; i++)
        {
            numeros[i]= readint("qual e o valor que vc quer ler: ");/*lendo valores*/
        }
        for (int i = 0; i < numVezes; i++)
        {
            if ( ((int)numeros[i]%2==0) and (a < numeros[i] and numeros[i] < b))
            {
                print("[%.2lf] pertence ao intervalo\n");
            }   
            cont++;
        }
        print("foram [%d] vezes que o valor entrou em todos os parametros\n",cont);   
    }

    pause ( "Apertar ENTER para terminar" );
}
void method10(){
    clear();
    id("exemplo 0320 - Programa - v0.0");

    int numVezes=0,cont=0;
    double a=0, b=0;

    a = readdouble("qual e o primeiro valor que vc quer: ");/*lendo valores*/
    b = readdouble("qual e o segundo valor que vc quer: ");/*lendo valores*/

    if (NOT( (0 < a AND a < 1) AND (0 < b AND b < 1) ))
    {
        print("ERRO\n");
        print("valores nao estao no intervalo de 0 e 1\n");
    }else
    {
        numVezes = readint("quais sao os valores a serem testados: ");/*lendo valores*/
        double numeros[numVezes];
        for (int i = 0; i < numVezes; i++)
        {
            numeros[i]= readint("qual e o valor que vc quer ler: ");/*lendo valores*/
        }
        for (int i = 0; i < numVezes; i++)
        {
            if(NOT(a < numeros[i] AND numeros[i] < b))
            {
                print("[%.2lf] nao pertence ao intervalo\n", numeros[i]);
            }
            cont++;
        }
        print("foram [%d] vezes que o valor entrou em todos os parametros\n",cont);   
    }
    
    

    pause ( "Apertar ENTER para terminar" );
}
void methodE1(){
    clear();
    id("exemplo 03E1 - Programa - v0.0");

    char palavra[80], charEspeciais[80];
    int cont=0;

    print("qual e a palavra que vc quier ler e saber os caracteres \n");
    scan("%78s", palavra);
    getchar();
    getchar();

    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (NOT isAlphaNum(palavra[i]))
        {
            charEspeciais[cont] = palavra[i];
            cont++;
        }
        
    }

    charEspeciais[cont] = '\0';

    print("os caracteres diferentes sao %s\n",charEspeciais);
    

    pause ( "Apertar ENTER para terminar" );
}
bool letter(char* palavra){
    for (int i = 0; i < (int)strlen(palavra); i++)
    {
        if (isLetter(palavra[i]))
        {
            return false; //nao e correta    
        }
    }
    return true;
}
void methodE2(){
    clear();
    id("exemplo 03E2 - Programa - v0.0");

    char  *palavra;

    palavra = IO_readstring ("qual e a string que vc quer ");


    if (letter(palavra))
    {
        print("a sequencia contem apenas simbolos\n");
    }else
    {
        print("a sequencia nao contem apenas simbolos\n");
    }
    
    
    pause ( "Apertar ENTER para terminar" );
}


//main
int main() {

    clear();
    int escolha;
    

    //menu de escolhas
    do
    {
        printf("[00] para o sair \n");
        printf("[01] para o 0311\n");
        printf("[02] para o 0312\n");
        printf("[03] para o 0313\n");
        printf("[04] para o 0314\n");
        printf("[05] para o 0315\n");
        printf("[06] para o 0316\n");
        printf("[07] para o 0317\n");
        printf("[08] para o 0318\n");
        printf("[09] para o 0319\n");
        printf("[10] para o 0320\n");
        printf("[11] para o 03E1\n");
        printf("[12] para o 03E2\n");
        escolha = readint("qual atividade voce quer ");


        switch (escolha)
        {
            case 0:
                break;
            case 1:
                method01();
                break;
            case 2:
                method02();
                break;
            case 3:
                method03();
                break;
            case 4:
                method04();
                break;
            case 5:
                method05();
                break;
            case 6:
                method06();
                break;
            case 7:
                method07();
                break;
            case 8:
                method08();
                break;
            case 9:
                method09();
                break;
            case 10:
                method10();
                break;
            case 11:
                methodE1();
                break;
            case 12:
                methodE2();
                break;
            default:
                printf("numero nao reconhecido\n");
                break;
        }
    } while (escolha != 0);


    //end
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}