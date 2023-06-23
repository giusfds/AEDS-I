#include <iostream>

using namespace std;

class carro{
    float tanque=0;
    int distancia=0;

    public:

     // Métodos get
    float getTanque() const {
        return tanque;
    }
    int getDistancia() const {
        return distancia;
    }
    // Métodos set
    void setTanque(float novoTanque) {
        tanque = novoTanque;
    }
    void setDistancia(int novaDistancia) {
        distancia = novaDistancia;
    }

    float abastecer(float x){
        // abastencendo a poha do carro
        float encremento=0;
        encremento = getTanque()+x;
        setTanque(encremento);
        return 0;
    }
    
    float Distancia (int andar){
        
        andar+=getDistancia();
        setDistancia(andar);


        float percorrido, novotanque;
        percorrido = andar / 15.0; // <- qnt combustivel eu gastei
        novotanque = getTanque()-percorrido;
        setTanque(novotanque);
        return 0;
    }

};

int main() {

    carro carro1;
    carro1.abastecer(20);
    carro1.Distancia(200);

    carro carro2;
    carro2.abastecer(30);
    carro2.Distancia(300);

    cout << "o carro1 andou:" << carro1.getDistancia() << "km" << endl;
    cout << "no tanque tem:" << carro1.getTanque() << "litros" << endl;

    cout << "o carro2 andou:" << carro2.getDistancia() << "km" << endl;
    cout << "no tanque tem:" << carro2.getTanque() << "litros" << endl;

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}