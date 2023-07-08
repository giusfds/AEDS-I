#include <iostream>

using namespace std;

class aluno{
    string nome;
    int idade;
    public:
    void setNome(string nome){
        this -> nome = nome;
    }
    void setIdade(int idade){
        this -> idade=idade;
    }
    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
};

int main() {
    int numeroAlunos=0;
    float media=0;

    cout << "quantos alunos vc tem" << endl;
    cin >> numeroAlunos;

    aluno aluno[numeroAlunos];

    for (int i = 0; i < numeroAlunos; i++)
    {
        string aux;
        int aux1;

        cout << "qual o nome do " << i+1 << " aluno" << endl;
        cin >> aux;
        aluno[i].setNome(aux);

        cout << "qual a idade do " << aluno[i].getNome()  << endl;
        cin >> aux1;
        aluno[i].setIdade(aux1);
        media += (aux1);

    }

    for (int i = 0; i < numeroAlunos; i++)
    {
        cout << endl;
        cout << "nome do aluno de numero " << i+1 << endl;
        cout << aluno[i].getNome() << endl;
        cout << endl;
        cout << "a idade do aluno de numero " << i+1 << endl;
        cout << aluno[i].getIdade() << endl;
        cout << endl;

    }
    
    float Media=0;
    Media = media/numeroAlunos;

    cout << "a media da idade de alunos e " << Media << endl;

    

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}