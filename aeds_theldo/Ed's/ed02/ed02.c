/*
 Exercicios0X - v0.0. - 16 / 08 / 2023
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
    // definir dado
    int numero=0; // definir variavel com valor inicial 
    printf("qual e o numero que vc quer verificar se e par ou impar\n");
    // ler do teclado
    scanf("%d", &numero);
    getchar();

    // testar valor
    if (numero % 2 == 0)
    {
        printf("o numero escolido e par\n");
    }else
    {
        printf("o numero e impar\n");
    }
    

}
void method02(){

    clear();
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // identificar
    IO_id ( "Exemplo0212 - Programa - v0.0" );

    // ler do teclado
    x = IO_readint ( "Entrar com um inteiro: ");

    // testar valor
    if ((x % 2 == 0) && (x > -30))
    {
        IO_println ("Numero par e maior que -15");
    } 
    else if ((x % 2 != 0) && (x < 30))
    {
        IO_println ("Numero impar e menor que trinta");
    } 
    else if ((x % 2 == 0) && (x < -30))
    {
        IO_println ("Numero par e menor que -15");
    }
    else if ((x % 2 != 0) && (x > 30))
    {
        IO_println ("Numero impar e maior que trinta");
    } 


}
void method03(){
    clear();
    IO_id("exemplo 0213 - Programa - v0.0");

    int numero;

    numero = IO_readint("entre com o numero que vc quer saber que esta no intervalo ");

    if (25 < numero && numero < 65)
    {
        IO_println("o valor se encontra dentro do espaco de 25:65");
    }else
    {
        IO_println("o valor nao se encontra dentro do espaco de 25:65");
    }

}
void method04(){
    clear();
    IO_id("exemplo 0213 - Programa - v0.0");

    int x;

    x = IO_readint("coloque o valor que vc quer testar ");

    if (20 <= x && x >= 60)
    {
        IO_println("o valor pertence ao intervalo de [20:60]");
    }else
    {
        IO_println("o valor nao pertence ao intervalo de [20:06]");
    }

}
void method05(){
    clear();
    IO_id("exemplo 0213 - Programa - v0.0");

    int x;

    x = IO_readint("qual e o valor que vc quer averiguar ");

    if (25<x && x>=30)
    {
        IO_println("o numero faz parte do intervalo [15:30] e (25:50)");
    }else if (25< x && x>50)
    {
        IO_println("o numero faz parte do intervalo (25:50), apenas");
    }else if (15 <= x && x>= 30)
    {
        IO_println("o numero faz parte do intervalo [15:30], apenas");
    }else
    {
        IO_println("o numero nao faz parte do intervalo [15:30] e (25:50)");
    }

}
void method06(){
    clear();
    IO_id("exemplo 0213 - Programa - v0.0");

    int x, y; 

    x = IO_readint("qual e o primeiro (x) numero");
    IO_println("");
    y = IO_readint("qual e o seugundo (y) numero");

    if (( x % 2 == 0) && ( y % 2 != 0)){
        IO_println ("(x) e impar e (y) e par");
    }else if (( x % 2 != 0) && ( y % 2 != 0)){
        IO_println ("(x) e (y) sao impares");
    }else if (( x % 2 == 0) && ( y % 2 != 0)){
        IO_println ("(x) e par e (y) e impar");
    }else{
        IO_println ("(x) e (y) sao pares");
    }
}
void method07(){
    clear();
    id("exemplo 0217 - Programa - v0.0");

    int x,y;

    x = IO_readint("qual e o valor de x ");
    y = IO_readint("qual e o valor de y ");

    if (x==0)
    {
        print("o valor e nulo\n");
    }else
    {
        if (x%2==0)
        {
            print("o numero e par\n");
        }else if(x%2!=0){
            print("o numero e impar\n");
        }
        if (x>0)
        {
            print("x e um numero positivo\n");
        }else if (x<0)
        {
            print("x e um numero negativo\n");
        }
    }
    if (y == 0)
    {
        print ("(y) e' um valor nulo");
    }
    else
    {
       if (y % 2 == 0) 
        {
            print ("(y) e' par");
        }
        else if (y % 2 != 0) 
        {
            print ("(y) e' impar");
        }
        if (y > 0)
        {
            print (" e positivo");
        }
        else if (y < 0)
        {
            print (" e negativo");
        }
    }

}
void method08(){
    clear();
    id("exemplo 0218 - Programa - v0.0");

    int x=0,y=0;

    x = IO_readint("escolha o valor de x ");
    y = IO_readint("escolha o valor de y ");
    
    int aux = y*2;

    if (x==aux)
    {
        print("ambos os valores sao iguais\n");
    }
    if (x<aux)
    {
        print("o valor de (x) e menor do que o dobro de (y)\n");
    }
    if (x>aux)
    {
        print("o valor de (x) e maior do que o dobro de (y)\n");
    }

}
void method09(){
    clear();
    id("exemplo 0219 - Programa - v0.0");

    int x,y,z;

    x=IO_readint("qual e o valor de X ");
    y=IO_readint("qual e o valor de Y ");
    z=IO_readint("qual e o valor de Z ");

    if (x==y and x==z)
    {
        print("os numero sao iguais\n");
    }else
    {
        if (x<y and y>z)
        {
            print("o valor (Y) esta no meio dos dois numeros\n");
        }else
        {
            print("o valor de (Y) nao esta presente entre (X) e (Z)\n");
        }
        
    }
}
void method10(){
    clear();
    id("exemplo 0220 - Programa - v0.0");

    double x=0,y=0,z=0;

    x =readdouble("qual e o valor de x ");
    y =readdouble("qual e o valor de y ");
    z =readdouble("qual e o valor de z ");

    if (x==y or x==z or z==y )
    {
        print("coloque numero diferentes\n");
    }else 
    {
        if (y > x)
        {
            if ((x < z) and (z < y))
            {
                print ("%lf ta entre %lf e %lf", z, x, y);
            }
            else
            {
                print ("%lf nao ta entre %lf e %lf", z, x, y);
            }
        }
        else if (y < x)
        {
            if ((y < z) and (z < x ))
            {
                print ("%lf ta entre %lf e %lf", z, y, x);
            }
            else
            {
                print ("%lf nao ta entre %lf e %lf", z, y, x);
            }
        }
    }

}
void methodE1(){
    clear();
    id("exemplo 02E1 - Programa - v0.0");

    char x=0,y=0,z=0;

    x =readchar("qual e a letra de x ");;
    y =readchar("qual e a letra de y ");;
    z =readchar("qual e a letra de z ");;

    if (x==y or x==z or z==y )
    {
        print("coloque numero diferentes\n");
    }else 
    {
        if (y > x)
        {
            if ((x < z) and (z < y))
            {
                print ("%c ta entre %c e %c", z, x, y);
            }
            else
            {
                print ("%c nao ta entre %c e %c", z, x, y);
            }
        }
        else if (y < x)
        {
            if ((y < z) and (z < x ))
            {
                print ("%c ta entre %c e %c", z, y, x);
            }
            else
            {
                print ("%c nao ta entre %c e %c", z, y, x);
            }
        }
    }

}
void methodE2(){
    clear();
    id("exemplo 02E2 - Programa - v0.0");

    char x,y,z;

    x =readchar("qual e o caractere correspondente a x ");
    y =readchar("qual e o caractere correspondente a y ");
    z =readchar("qual e o caractere correspondente a z ");

    if (x==y or x==z or z==y )
    {
        print("coloque caractere diferentes\n");
    }else 
    {
        if (y > x)
        {
            if ((x < z) and (z < y))
            {
                print ("%c ta entre %c e %c", z, x, y);
            }
            else
            {
                print ("%c nao ta entre %c e %c", z, x, y);
            }
        }
        else if (y < x)
        {
            if ((y < z) and (z < x ))
            {
                print ("%c ta entre %c e %c", z, y, x);
            }
            else
            {
                print ("%c nao ta entre %c e %c", z, y, x);
            }
        }
    }

}


//main
int main() {

    clear();
    int escolha;
    

    //menu de escolhas
    do
    {
        printf("[00] para o sair \n");
        printf("[01] para o 0211\n");
        printf("[02] para o 0212\n");
        printf("[03] para o 0213\n");
        printf("[04] para o 0214\n");
        printf("[05] para o 0215\n");
        printf("[06] para o 0216\n");
        printf("[07] para o 0217\n");
        printf("[08] para o 0218\n");
        printf("[09] para o 0219\n");
        printf("[10] para o 0220\n");
        printf("[11] para o 02E1\n");
        printf("[12] para o 02E2\n");
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