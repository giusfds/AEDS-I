#include <iostream>

using namespace std;

class pagamento{
    string comprador;
    float valor;
    int codProduto;
    public:
    // setteres 
    void setComprador(string comprador){
        this -> comprador = comprador;
    }
    void setValor(float valor){
        if (valor <= 0)
        {
            this -> valor = valor;
        }
    }
    void setCodProduto(int codProduto){
        if (codProduto<=0 && codProduto >= 5)
        {
         this -> codProduto = codProduto;   
        }
    }
    // getteres
    string getComprador(){
        return comprador;
    }
    float getValor(){
        return valor;
    }
    int getCodProduto(){
        return codProduto;
    }
};

class credito : public pagamento{
    string BandeiraDoCartao;
    public:
    void setBandeira(string BandeiraDoCartao){
        this -> BandeiraDoCartao = BandeiraDoCartao;
    }
    string getBandeira(){
        return BandeiraDoCartao;
    }
};

class pix : public pagamento{
    int codBanco;
    public:
    void setCodBanco(int codBanco){
        this -> codBanco = codBanco;
    }
    int getCodBanco(){
        return codBanco;
    }
};

int GanhoProduto3(/*int pix[10], int credito[10]*/){
    pix pix[10];
    credito credito[10];

   
    
}

int main() {

    
   

    cout << "\n------- | FIM DO PROGRAMA | -------\n\n";
    return 0;
}