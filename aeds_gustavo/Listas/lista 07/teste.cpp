#include <iostream>
#include "E2.hpp"

using namespace std;

int main() {

    Hora h3;
    Hora h1(10, 20, 30);
    Hora h2(2, 3, 4);

    h3 = h1 + h2;
    

    h3.exibeHorario();

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}