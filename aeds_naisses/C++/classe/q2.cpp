#include <iostream>
#include <iomanip>

using namespace std;

class Relogio{
    int hora;
    int minuto; 
    int segundo; 

    public:

    void setHora(int hora, int minuto, int segundo){
        this -> hora = hora;
        this -> minuto = minuto;
        this -> segundo = segundo;
    }

    string getHora(){
        string str;
        str = to_string(hora)+":"+to_string(minuto)+":"+to_string(segundo);

        // Formatação personalizada
        stringstream ss;
        ss << setfill('0') << setw(2) << hora << ":" << setw(2) << minuto << ":" << setw(2) << segundo;
        str = ss.str();

        return str;
    }

    void incremento(){
        if (++segundo == 60)
        {
           minuto ++;
           segundo=0;
           
        }
        if (minuto==60)
        {
            hora++;
            minuto=0;
        }
        
    }

};



int main() {
    Relogio relogio;
    relogio.setHora(12,20,30);

    for (int i = 0; i < 1000; i++)
    {
        relogio.incremento();
        cout << relogio.getHora() << endl;
    }
    
    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}