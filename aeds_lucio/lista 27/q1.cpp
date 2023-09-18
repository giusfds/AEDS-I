#include <iostream>

using namespace std;

const int  MAX = 10;

class FigGeo{
    int quantidade;
    string cor;
    public:
    FigGeo(){}
    int getQuantidade(){
        return quantidade;
    }
    void setCor(string cor){
        cor = cor;
    }
    string getCor(){
        return cor;
    }
    void leia(){}
    void escreva(){}
    int perimetro(){}
    int area(){}

};

class circulo:public FigGeo{
    int raio;
    int quantidade; 
    public:
    circulo(){}
    circulo(int real){}
    circulo(int real, string string){}
    void setRaio(int raio){
        raio = raio;
    }
    
    // faltas uns termos aqui que eu nn sei usar
    void leia(){}
    void escreva(){}

    int perimetro(){}
    int area(){}
    int getQuantidade(int quantidade){
        return quantidade;
    }
}; 

class quadrado:public FigGeo{
    int lado;
    int quantidade;
    public:
    quadrado(){}
    quadrado(int real){}
    quadrado(int real, string str){}
    void setLado(int lado){
        lado = lado;
    }
    int getLado(){
        return lado;
    }

    // coisas que eu nao sei o que fazer 
    void leia(){}
    void escreva(){}

    int perimetro(){}
    int area(){}
    int getQuantidade(){
        return quantidade;
    }

};

class triangulo:public FigGeo{
    int a; 
    int b;
    int c;
    int quantidade;
    public:
    triangulo(){}
    triangulo(int a, int b, int c){}
    triangulo(int a, int b, int c, string str){}
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
    int getC(){
        return c;
    }

    // coisas que eu nao sei o que fazer 
    void leia(){}
    void escreva(){}

    int perimetro(){}
    int area(){}
    bool valido(){}
    int getQuantidade(){
        return quantidade;
    }

};

int main() {

    int array[MAX];


    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}