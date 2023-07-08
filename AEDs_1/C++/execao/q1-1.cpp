#include <iostream>

using namespace std;

int main() {

   try
   {
    int numeroDado;
    cout << "digite os numeros da conta" << endl;
    cin >> numeroDado;
    if (numeroDado < 1 || numeroDado > 6)
    {
        throw exception();
    }else{
        cout << "numero valido" << endl;
    }
    
   }
   catch(const exception& e)
   {
    cout << "numero invalido" << endl;
    
   }
   

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}