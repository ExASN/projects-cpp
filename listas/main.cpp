/*Principais funções
- size() --> retorna o tamanho da lista
- push_front() --> inclui um novo elemento no início da lista
- push_back() --> inclui um novo elemento no final da lista.
- pop_front() --> Retira o elemento que está no início da lista.
- pop_back() --> Retira o elemento que está no final da lista.
- front() --> Retorna qual o valor que está no início da lista.
- back() --> Retorna qual o valor que está no finla da lista.
- sort() --> Ordena os itens armazenados na lista.
- reverse() --> Inverte a ordem dos itens armazenados na lista.
- begin() --> Avança até o início da lista.
- end() --> Avança até o final da lista.
- erease() --> Apaga o elemento da posição seguinte ao iterator selecionado.
- clear() --> Esvazia, faz a limpeza da lista.
- empty() --> Realiza a verificação da lista. Caso esteja vazia ele retorna o valor 1, caso contrário retorna 0.
- merge() --> Recorta e acrescenta os valores de uma outra lista, em suas respectivas posições.
*/
//Cabeçalho
#include <iostream>
#include <list>         //Biblioteca que possui as funções para manipulação de listas.
#include <iterator>     //Biblioteca que possui as funções de manipulação do iterator.

//Definições globais
using namespace std;

//Algorítimo
int main(){
    list <uint16_t> IdPaciente, teste;
    uint16_t tam;
    list<int>::iterator itr;     //É criado um vetor do tipo inteiro da classe iterator

    tam=10;
    for (uint16_t i = 0; i < tam; i++)
    {
        IdPaciente.push_front(i);
    }
    for (uint16_t i = 0; i < 5; i++)    //Com esse for, os elementos da lista teste, de 0 a 4 recebem o valor 9.
    {
        teste.push_front(9);
    }

    itr = IdPaciente.begin();       //A função begin() aponta para o início da lista.
    advance(itr,5);                 //A função advance() avaça no iterator até a posição 5'
    IdPaciente.insert(itr, 0);      //A função insert() insere na lista IdPaciente, na posição iterator, o valor de 0.
    
    IdPaciente.reverse();           //A função reverse() reverte a ordem dos elementos armazenados na lista IdPaciente.

    advance(itr,8);                 //A função advance() avaça no iterator até a posição 5'
    IdPaciente.erase(--itr);        //Como o erese() remove o valor seguinte ao itr, então é usado o decremento para chegar à posição correta;
    
    IdPaciente.merge(teste);        //A lista IdPaciente recebe os valores recortados da lista teste em suas respectivas posições e esvazia a lista teste.

    for (uint16_t i = 0; i < tam; i++)
    {
        cout << endl << IdPaciente.front() << endl;
        IdPaciente.pop_front();                         //Remove o elemento que está na frente da lista. Esvazia a lista.
    }
    
    return 0;
}