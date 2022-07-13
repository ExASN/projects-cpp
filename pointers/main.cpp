#include <iostream>
using namespace std;

int main(){
    string veiculo="Carro"; //Criação da variável veiculo do tipo string
    string *pv;             //Criação do ponteiro pv do tipo string

    pv = &veiculo;          //Armazena o endereço de veiculo no ponteiro pv
    cout << pv << "\n" << &veiculo << "\n";     //imprime o valor armazenado no ponteiro pv e o endereço da memoria alocada pela variável veiculo

    *pv = "Moto";      //A variável para onde o ponterio pv aponta, recebe o valor Moto

    cout << "\n" << veiculo << "\n" << *pv << "\n";     //Imprime o valor armazenado na variável veiculo e onde o ponteiro pv aponta.

    return 0;
}