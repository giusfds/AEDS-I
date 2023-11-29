#include <iostream>
using namespace std;

class Hora
{
private:
   int segundo;
   int minuto;
   int hora;

public:
   Hora();

   // void sethora(int hora) { this->hora = hora; }
   // void setMinuto(int minuto) { this->minuto = minuto; }
   // void sertSegundo(int segundo) { this->segundo = segundo; }
   int getMinuto() { return minuto; }
   int getSegundo() { return minuto; }
   int gethora() { return hora; }
};