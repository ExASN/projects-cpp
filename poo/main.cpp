#include <iostream>
#include <stdlib.h>

using namespace std;

class Caneta
{
private:
    /* data */
public:
    float ponta;
    bool tampada;
    string cor;
    void ini(int cr); //Prototipagem do método público de inicialização do objeto.
};

void Caneta::ini(int cr){ //Método de inicialização do objeto.
    if(cr == 0){
        this->cor="azul";
        this->ponta=0.5;
        this->tampada=true;
    }else if(cr == 1){
        this->cor="preta";
        this->ponta=0.7;
        this->tampada=false;
    }else if(cr == 2){
        this->cor="vermelha";
        this->ponta=0.9;
        this->tampada=true;    
    }
}
int main(){
    system("clear");
    Caneta *caneta1 = new Caneta();     //Instanciamento da classe Caneta. Criação do objeto caneta1 com o uso de vetor.
    caneta1->ini(0);                    //Chama o método de inicialização do objeto.
    cout << caneta1->cor << endl;       //Consulta o valor do atributo público e imprime na tela.
    cout << caneta1->ponta << endl;
    cout << caneta1->tampada << endl;
    cout <<"----------------------"<<endl;
    Caneta *caneta2 = new Caneta();     //Instanciamento da classe Caneta. Criação do objeto caneta1 com o uso de vetor.
    caneta2->ini(1);                    //Chama o método de inicialização do objeto.
    cout << caneta2->cor << endl;       //Consulta o valor do atributo público e imprime na tela.
    cout << caneta2->ponta << endl;
    cout << caneta2->tampada << endl;
    cout <<"----------------------"<<endl;
    Caneta *caneta3 = new Caneta();     //Instanciamento da classe Caneta. Criação do objeto caneta1 com o uso de vetor.
    caneta3->ini(2);                    //Chama o método de inicialização do objeto.
    cout << caneta3->cor << endl;       //Consulta o valor do atributo público e imprime na tela.
    cout << caneta3->ponta << endl;
    cout << caneta3->tampada << endl;  

    return 0;
}