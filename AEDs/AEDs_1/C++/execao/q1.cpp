#include <iostream>

using namespace std;

int main() {

    try
    {
        int NumeroDadO;
        cout << "digite um valor, para saber se e valido ou nao" << endl;
        cin >> NumeroDadO;
        if (NumeroDadO < 1 || NumeroDadO > 6)
        {
            throw invalid_argument(to_string(NumeroDadO));
        }else
        {
            cout << "valor valido" << endl;
        }
        
        
    }
    catch(exception& e)
    {
        cout << "o valor " << e.what() << " nao e valido" << endl;
    }
    

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}