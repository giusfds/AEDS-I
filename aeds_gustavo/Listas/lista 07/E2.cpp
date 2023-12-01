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

// 1.
Hora::Hora( ){
    hora = 00;
    minuto = 00;
    segundo = 00;
}

// 2.
bool Hora::valida( int segundo, int minuto, int hora ){
    if ( segundo >= 0 && segundo < 60 &&
        minuto >= 0 && minuto < 60 &&
        hora >= 0 && hora < 24 ) {
        return true;
    }
    return false;
}

Hora::Hora( int segundo, int minuto, int hora ){
    if ( valida ( segundo, minuto, hora ) )
    {
        this -> segundo = segundo;
        this -> minuto = minuto;
        this -> hora = hora;
    }
}

// 3.
int Hora::getSegundo( ) { return segundo; }
int Hora::getMinuto( ) { return minuto; }
int Hora::getHora( ) { return hora; }

// 4.
int Hora::adiciona( int segundo, int minuto, int hora ){}

// 5.
Hora Hora::operator+ ( const Hora &segundo )  {
    Hora resultado = *this;

    if (resultado.segundo >= 60) {
        resultado.minuto += resultado.segundo / 60;
        resultado.segundo %= 60;
    }

    if (resultado.minuto >= 60) {
        resultado.hora += resultado.minuto / 60;
        resultado.minuto %= 60;
    }

    if (resultado.hora >= 24) {
        resultado.hora %= 24;
    }

    return resultado;
};

Hora Hora::operator= ( const Hora &segundo ){
    this -> hora = segundo.hora;
    this -> minuto = segundo.minuto;
    this -> segundo = segundo.segundo;
    return *this;
}

// 7.
void Hora::exibeHorario( ) {
    std::cout << "Hora atual: " << getHora() << ":" << getMinuto() << ":" << getSegundo() << endl;
}