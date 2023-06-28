#include <iostream>

using namespace std;

class animal{
    string nome;
    string raca;
    public:
    // setteres

    void setRaca(string raca){
        raca = raca;
    }
    void setNome(string nome){
        nome = nome;
    }
    // getteres

    string getRaca(){
        return raca;
    }
    string getNome(){
        return nome;
    }

    // comandos da questao
    void caminha(){

    }
};

class cachorro{
    public:
    void late(){

    }
};

class gato{
    public:
    void mia(){

    }
};

int main() {



    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}