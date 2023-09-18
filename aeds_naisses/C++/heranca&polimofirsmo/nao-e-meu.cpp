#include <iostream>

using namespace std;

class Forma
{
 public:
    virtual double perimetro () = 0;
    virtual double area () = 0;
    virtual void imprimir () = 0;
    virtual void mostrarForma () = 0;
};

class Retangulo : public Forma
{
    private:
        double base;
        double altura;
    
    public:
        Retangulo (double base, double altura) : base (base), altura (altura) 
        {
          
        }

        double perimetro ()
        {
            return 2 * (base + altura);
        }
    
        double area ()
        {
            return base * altura;
        }
        
        double getBase ()
        {
            return base;
        }
    
        void imprimir ()
        {
            cout << "\n\tRetângulo\n" << endl;
            cout << "Base: " << base << endl;
            cout << "Altura: " << altura << endl;
            cout << "Perímetro: " << perimetro () << endl;
            cout << "Área: " << area () << endl;
        }
    
        void mostrarForma ()
        {
            imprimir ();
        }
};

class Quadrado : public Retangulo
{
    public:
        Quadrado (double base) : Retangulo (base, base) 
        {
          
        }

        double perimetro ()
        {
            return (4 * getBase ());
        }
        
        double area ()
        {
            return (getBase () * getBase ());
        }
    
        void imprimir ()
        {
            cout << "\n\tQuadrado\n" << endl;
            cout << "Lado: " << getBase () << endl;
            cout << "Perímetro: " << perimetro () << endl;
            cout << "Área: " << area () << endl;
        }
    
        void mostrarForma ()
        {
            imprimir ();
        }
};

class Circulo : public Forma
{
    private:
        int raio;
    
    public:
        Circulo (double raio) : raio (raio) 
        {
          
        }
      
        double perimetro ()
        {
            return (2 * 3.14 * raio);
        }
    
        double area ()
        {
            return (3.14 * raio * raio);
        }
    
        void imprimir ()
        {
            cout << "\n\n\tCírculo\n" << endl;
            cout << "Raio: " << raio << endl;
            cout << "Perímetro: " << perimetro () << endl;
            cout << "Área: " << area () << endl;
        }
    
        void mostrarForma ()
        {
           imprimir ();
        }
};

int main ()
{
    Forma *retangulo = new Retangulo (4.0, 5.0);
    retangulo->mostrarForma (); 

    Forma *quadrado = new Quadrado (3.0);
    quadrado->mostrarForma (); 

    Forma *circulo = new Circulo (2.0);
    circulo->mostrarForma (); 

    return 0;
}
