#include <iostream>

using namespace std;

class animalestimacao{
    string nome;
    string raca;
    public:
    // Setter para o nome
    void setNome(const string& novoNome) {
        nome = novoNome;
    }
    // Setter para a raça
    void setRaca(const string& novaRaca) {
        raca = novaRaca;
    }

    // Getter para o nome
    string getNome() const {
        return nome;
    }
    // Getter para a raça
    string getRaca() const {
        return raca;
    }

    void caminha(){
        cout << "caminhando" << endl;
    }
    
};

class cachorro:public animalestimacao{
    public:
    void late(){
        cout << "auau" << endl;
    }
};
class gato:public animalestimacao{
    public:
    void mia(){
        cout << "miau" << endl;
    }
};


int main() {

    cachorro dog;
    dog.setNome("toto");
    dog.setRaca("labrador");
    dog.late();

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}