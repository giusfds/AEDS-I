#include <iostream>

using namespace std;

class animalestimacao
{
    string nome;
    string raca;
    string cor;

public:
    void caminhar()
    {
        cout << "andando" << endl;
    }

    void xuxu(){
        cout << "oi xuxu" << endl;
    }

    // set
    void setRaca(string raca){
        this -> raca=raca;
    }
    void setNome(string nome){
        this -> nome=nome;
    }

    // get
    string getRaca(){
        return this -> raca;
    }
    string getNome(){
        return this -> nome;
    }

};

class cachorro : public animalestimacao
{
public:
    void late()
    {
        cout << "auau" << endl;
    }
};

class gato : public animalestimacao
{
public:
    void mia()
    {
        cout << "miau" << endl;
    }
};

int main()
{
    cachorro dog;
    cout << "cachorro" << endl;
    dog.setNome("toto");
    dog.setRaca("pastor alemao");
    dog.caminhar();
    dog.late();
    cout << "nome:" << dog.getNome() << endl;
    cout << "raca:" << dog.getRaca() << endl;

    // gato

    cout << endl;

    gato cat;
    cout << "gato" << endl;
    cat.caminhar();
    cat.mia();
    cat.setRaca("salmao");
    cat.setNome("neguion");
    cout << "nome:" << cat.getNome() << endl;
    cout << "raca:" << cat.getRaca() << endl;
    

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}
