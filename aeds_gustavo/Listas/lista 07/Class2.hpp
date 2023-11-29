#include <iostream>
using namespace std;

class Hora
{
private:
   int segundo;
   int minuto;
   int hora;

public:
   // 1.
   Hora();

   // 2.
   Hora( int, int, int );
   bool valida( int, int, int );

   // 3.
   int getSegundo( );
   int getMinuto( );
   int getHora( );

   // 4.
   int adiciona( int, int, int );

   // 5.
   Hora operator+ ( const Hora &segundo );
   Hora operator= ( const Hora &segundo );

   // 7.
   void exibeHorario();
};