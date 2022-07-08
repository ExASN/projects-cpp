/*Principais funções
- size() --> retorna o tamanho da lista
- push_front() --> inclui um novo elemento no início da lista
- push_back() --> inclui um novo elemento no final da lista.
- pop_front() --> Retira o elemento que está no início da lista.
- pop_back() --> Retira o elemento que está no final da lista.
- front() --> Retorna qual o valor que está no início da lista.
- back() --> Retorna qual o valor que está no finla da lista.
*/
//Cabeçalho
#include <iostream>
#include <list>     //Biblioteca que possui as funções para manipulação de listas.

//Definições globais
using namespace std;

//Algorítimo
int main(){
    list <uint16_t> IdPaciente;
    uint16_t tam;
    //list<int>::iterator it;

    tam=10;
    for (uint16_t i = 0; i < tam; i++)
    {
        IdPaciente.push_front(i);
    }

    //it = IdPaciente.begin();
    advance(IdPaciente.begin(),5);
    IdPaciente.insert(IdPaciente.begin(),0);

    for (uint16_t i = 0; i < tam; i++)
    {
        cout << endl << IdPaciente.front() << endl;
        IdPaciente.pop_front();
    }
    
    

    return 0;
}