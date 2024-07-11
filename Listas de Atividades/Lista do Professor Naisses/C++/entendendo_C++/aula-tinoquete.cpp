#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


using namespace std;

class pessoa{
  private:
    string nome1;
  public:

    void setNome(string nome){
        this -> nome1 = nome;
    }

    string getNome(){
        return nome1;
    }

};


int main() {

    pessoa tinoco;
    tinoco.setNome("lanna");
    cout <<  tinoco.getNome() << endl;
    



    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}