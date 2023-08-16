/*
 Exercicios0X - v0.0. - XX / XX / 2023
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

}
void method02(){

}
void method03(){

}
void method04(){

}
void method05(){

}
void method06(){

}
void method07(){

}
void method08(){

}
void method09(){

}
void method10(){

}
void methodE1(){

}
void methodE2(){

}


//main
int main() {

    clear();
    int escolha;
    

    //menu de escolhas
    do
    {
        printf("[00] para o sair \n");
        printf("[01] para o 0XxX11\n");
        printf("[02] para o 0XxX12\n");
        printf("[03] para o 0XxX13\n");
        printf("[04] para o 0XxX14\n");
        printf("[05] para o 0XxX15\n");
        printf("[06] para o 0XxX16\n");
        printf("[07] para o 0XxX17\n");
        printf("[08] para o 0XxX18\n");
        printf("[09] para o 0XxX19\n");
        printf("[10] para o 0XxX20\n");
        printf("[11] para o 0XxXE1\n");
        printf("[12] para o 0XxXE2\n");
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