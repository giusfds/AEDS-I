#include <iostream>

using namespace std;

class Exessaodado{
    string teste;

    public:
    string print(){
        return teste;
    }
    Exessaodado(string msg){
        teste = msg;
    }
};

int main() {

    try
    {
        int NumeroDadO;
        cout << "digite um valor, para saber se e valido ou nao" << endl;
        cin >> NumeroDadO;
        if (NumeroDadO < 1 || NumeroDadO > 6)
        {
            throw Exessaodado(to_string (NumeroDadO));
        }else
        {
            cout << "valor valido" << endl;
        }
        
        
    }
    catch(Exessaodado e)
    {
        cout << "o valor " << e.print() << " nao e valido" << endl;
    }
    

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}