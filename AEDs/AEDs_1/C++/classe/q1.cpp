#include <iostream>

using namespace std;

class pessoa{
    int idade;
    float altura;
    string nome;

    public:

    //set
    void setIdade(int novaIdade){
        idade = novaIdade;
    }
    void setAltura(float novaAltura){
        altura = novaAltura;
    }
    void setNome(string novoNome){
        nome = novoNome;
    }

    //get

    int getIdade(){
        return idade;
    }
    float getAltura(){
        return altura;
    }
    string getNome(){
        return nome;
    }

    void print(){
        cout << nome << endl;
        cout << altura << endl;
        cout << idade << endl;
        
    }

};



void dados(pessoa* pessoa){
    int idade;
    float altura;
    string nome;

    cout << "digite a idade" << endl;
    cin >> idade;
    cout << "digite a altura" << endl;
    cin >> altura;
    cout << "digite o nome" << endl;
    cin >> nome;

    (*pessoa).setNome(nome);
    (*pessoa).setAltura(altura);
    (*pessoa).setIdade(idade);
}


int main() {

    pessoa gius;
    dados(&gius);
    gius.print();

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}