#include <stdio.h>
#include "9.h"

// typedef struct 
// {
//     int dia;
//     int mes;
//     int ano;
// } Data;

// typedef struct
// {
//     int segundo;
//     int minuto;
//     int hora;
// } Horario;

// typedef struct 
// {
//     Horario hora;
//     Data data;
// } Tempo;


int main() {

    Tempo tempo;

    printf("digite quantas horas\n");
    scanf("%d", &tempo.hora.hora);
    getchar();
    printf("digite quantos minutos\n");
    scanf("%d", &tempo.hora.minuto);
    getchar();
    printf("digite quantos segundos\n");
    scanf("%d", &tempo.hora.segundo);
    getchar();

    printf("digite que dia e hoje\n");
    scanf("%d", &tempo.data.dia);
    getchar();
    printf("digite que mes estamos\n");
    scanf("%d", &tempo.data.mes);
    getchar();
    printf("digite em que ano nos estamos\n");
    scanf("%d", &tempo.data.ano);
    getchar();
    
    printf("horario:\n");
    printf("%d:%d:%d\n", tempo.hora.hora, tempo.hora.minuto, tempo.hora.segundo);
    printf("data:\n");
    printf("%d/%d/%d\n", tempo.data.dia, tempo.data.mes, tempo.data.ano);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}