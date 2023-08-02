#include <iostream>

using namespace std;

class fig{
    public:
    virtual double perimetro () = 0;
    virtual double area () = 0;
    virtual void imprimir () = 0;
    virtual void mostrarForma () = 0;

};

class retangulo :public fig {
    double base;
    double altura;
    public:
    double perimetro(){
        double per;
        per = (base + altura) * 2;
        return per;
    }
};

int main() {



    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}