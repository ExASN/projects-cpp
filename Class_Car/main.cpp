#include <iostream>
#include <string>

using namespace std;

class Carro
{
private:

public:
    Carro(int tp, int vm, string nm);
    ~Carro();
    void getCarro();
     int tipo;
     int velmax;
     string nome;
};

Carro::Carro(int tp, int vm, string nm)
{
    tipo = 0;
    velmax = 50;
    nome = "padrao";
}

Carro::~Carro()
{
}

void getCarro()
{
    
}
// class dog
// {
// public:
//    dog()
//    {
//       _legs = 4;
//       _bark = true;
//    }

//    void setDogSize(string dogSize)
//    {
//       _dogSize = dogSize;
//    }
//    virtual void setEars(string type)      // virtual function
//    {
//       _earType = type;
//    }

// private:
//    string _dogSize, _earType;
//    int _legs;
//    bool _bark;

// };

int main()
{

    return 0;
}