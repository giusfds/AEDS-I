#include "io.h"
#define PI 3.14159265358979323846

void method01(){

    float lado=0, ladox6=0, ladoquadrado;

    printf("qual e o lado do quadrado\n");
    scanf("%d", &lado);

    if (lado > 0)
    {
        ladox6=lado*6;

        ladoquadrado = ladox6 * ladox6;

        printf("%.2f\n", ladoquadrado);
    }else
    {
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );

}

void method02(){

    double lado=0;
    printf("qual e o lado que vc quer colocar ai\n");
    scanf("%lf", &lado);

    if (lado > 0)
    {
        float umTerco=0;
        umTerco = lado/3;

        double novoArea=0;
        novoArea = umTerco * umTerco;
        // 1|3 area do quadrado 

        double perimetro=0;
        perimetro = umTerco * 4;

        printf("area: %lf\n", novoArea);
        printf("perimetro: %lf\n", perimetro);  
    }else
    {
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );

}
void method03(){

    double lado, altura, ladox4, alturax4, area;

    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado);
    getchar();

    if (lado>0){
        
        printf("fale o numero corespondente a altura\n");
        scanf("%d", &altura);
        getchar();
        if (altura>0)
        {
            ladox4 = lado * 4;
            alturax4 = altura *4;

            area =  alturax4 * ladox4;

            printf("a area do retangulo 4x maior e %.2lf\n", area);

        }else{
            printf("o valor e negativo ou igual a 0\n");
        }
        
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );

}
void method04(){

    double lado, altura, lado5, altura5, area, perimetro;

    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado);
    getchar();
    
    if (lado>0)
    {
        
        printf("fale o numero corespondente a altura\n");
        scanf("%d", &altura);
        getchar();
        if (altura>0){
            lado5 = lado / 5;
            altura5 = altura / 5;

            area =  altura5 * lado5;

            perimetro = (altura5 *2)+(lado5 *2);

            printf("a area do retangulo 1/5 maior e %.2lf\n", area);
            printf("o perimetro do retangulo 1/5 menor %.2lf\n");
        }else{
        printf("o valor e negativo ou igual a 0\n");
        }

    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );

}
void method05(){

    double base, h, area;

    printf("fale o numero corespondente a base\n");
    scanf("%d", &base);
    getchar();

    if (base>0)
    {
        
        printf("fale o numero corespondente a h\n");
        scanf("%d", &h);
        getchar();
        if (h>0)
        {
            area = (base * h)/2;

            printf("a area e %.2lf\n", area);
        }else{
        printf("o valor e negativo ou igual a 0\n");
        }   
        
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );

}
double calcular_h(double x) {
    double h = x * sqrt(3) / 2;
    return h;
}
void method06(){

    double lado, altura, perimetro, area;
    printf("fale o numero corespondente a lado\n");
    scanf("%d", &lado); // pegando o lado do trinagulo
    getchar();

    if (lado>0){
        altura = calcular_h(lado);// calculando a altura
        area = (lado*altura)/2;

        perimetro = lado * 3;

        printf("area: %lf\n", area);
        printf("perimetro: %lf\n", perimetro);
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );
    
}
void method07(){

    double valor, volume, novoValor; 

    printf("qual e o valor que vc quer colocar");
    scanf("%lf", &valor);

    if (valor>0)
    {
        novoValor = valor * 7;

        volume = novoValor * 3; 

        printf("esse e o volume do cubo 7x %.2lf\n", volume);
    }else
    {
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );

}
void method08(){

    double valor1, valor2, valor3, valor17=0, valor27=0, valor37=0, volume; 

    printf("qual e o valor1 que vc quer colocar");
    scanf("%lf", &valor1);
    getchar();

    if (valor1>0)
    {
        printf("qual e o valo2 que vc quer colocar");
        scanf("%lf", &valor2);
        getchar();
        if (valor2>0)
        {
            printf("qual e o valo3 que vc quer colocar");
            scanf("%lf", &valor3);
            getchar();
            if (valor3>0)
            {
                valor17 = valor1/7;
                valor27 = valor2/7;
                valor37 = valor3/7;

                volume = valor17 * valor27 * valor37;

                printf("o valor do volume do cuvo 7x menor e %.2lf\n", volume);
            }else{
            printf("o valor e negativo ou igual a 0\n");
            }
            
        }else{
        printf("o valor e negativo ou igual a 0\n");
        }
   
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );
    
}
void method09(){

    double raio, metadeRaio, semiCirculo;
    printf("defina o valor do raio\n");
    scanf("%lf", &raio);
    getchar();

    if (raio>0)
    {
        metadeRaio = raio / 2;

        // pi r^2

        semiCirculo = ((PI * metadeRaio)/2)/2;
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );
    
}
void method10(){

    double raio;
    printf("quel e o raio que vc quer colocar\n");
    scanf("%lf", &raio);
    getchar();

    if (raio>0)
    {
        double raio8, raiox3;
        raio8 = raio/8;
        raiox3 = raio8 * 3;

        double volume;
        volume = 4/3 * PI * (pow(raio, 3));

        printf("o valor do volume do circulo em 3/8 e %.2lf\n", volume);
    }else{
        printf("o valor e negativo ou igual a 0\n");
    }
    IO_pause ( "Apertar ENTER para terminar" );
    
}
double method011(double area) {
    double h = sqrt(PI/area) ;
    return h;
}
void method11(){

    double area;
    printf("insira o area que vc quer colocar\n");
    scanf("%lf", &area);
    //PI R^2
    double r, area3;
    area3 = area/3;
    r = method011(area3);
    
    printf("o valor de 1/3 da area e %.2ls\n", r);
    IO_pause ( "Apertar ENTER para terminar" );
    
}
double method012(double volume) {
    double h = pow((4/3*PI/volume), 1/3);
    return h;
}
void method12(){

    printf( "\nExercicio 01E2:\n\n" );

    double volume = 0.0, volumeNovo = 0.0, raio = 0.0, area = 0.0;

    printf( "Insira o valor do volume de uma esfera: " );
    scanf( "%lf" , &volume );
    getchar();
    printf( "\n" );

    volumeNovo = ( 3 * volume ) / 4;

    raio = cbrt( (volumeNovo * 3 * PI) / 4 );

    area = 4 * PI * pow( raio, 2 );

    printf( "O raio de 3/4 do volume da esfera e: %.2lf\n" , raio ); 

    printf( "A area da superficie da esfera e: %.2lf\n" , area ); 

    IO_pause ( "Apertar ENTER para terminar" );

    
}

int main() {

    IO_id("exemplo ed01 - Programa - v0.0");

    int escolha;
    do
    {
        printf("[00] para o sair\n");
        printf("[01] para o 0111\n");
        printf("[02] para o 0112\n");
        printf("[03] para o 0113\n");
        printf("[04] para o 0114\n");
        printf("[05] para o 0115\n");
        printf("[06] para o 0116\n");
        printf("[07] para o 0117\n");
        printf("[08] para o 0118\n");
        printf("[09] para o 0119\n");
        printf("[10] para o 0120\n");
        printf("[11] para o 01E1\n");
        printf("[12] para o 01E2\n");
        escolha = IO_readint("qual atividade voce quer ");


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
                method11();
                break;
            case 12:
                method12();
                break;
            default:
                printf("numero nao reconhecido\n");
                break;
        }
    } while (escolha != 0);
    
    

    IO_pause ( "Apertar ENTER para terminar" );
    return 0;
    
}