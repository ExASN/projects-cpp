#include <iostream>
#include <queue>                                //Biblioteca com funções para trabalhar com filas
using namespace std;
/* Principais comandos para queue (filas)
- empty() --> verifica se a fila está vazia e retorna 1, caso contrário retorna 0.
- push() --> acrescenta um item na fila.
- size() --> retorna o tamanho da fila.
- pop() --> realiza a retirada do primeiro elemento.
obs.: diferente da PILHA, na FILA, o primeiro elemento a entrar é o primeiro a sair
- front() --> retorna o primeiro elemento da fila.
- back() --> retorna o último elemento da fila. 
*/

int main(){
    queue <string> carros;                      //Criar o vetor carros do tipo fila.
    if (carros.empty()==1)                      //Informa se a fila está vazia.
    {
        cout << endl << "A fila esta vazia..." << endl;
    }else{
        cout << endl << "Carros no drive-thru!" << endl;
    }
    
    carros.push("Lamborghini - Huracan");       //Acrescentar dados à fila
    carros.push("Audi - R8");
    carros.push("Ferrari - Portofino");
    carros.push("BMW - Z4 Roadster");
    carros.push("Porsche - 911");
    carros.push("Mercedes-Benz - AMG GT");
    carros.push("Aston Martin - DBS Superleggera Volante");

    for (size_t i = 0; i < 1000000000; i++);    //um delay improvisado.

    if (carros.empty()==1)                      //Informa se a fila está vazia.
    {
        cout << endl << "A fila esta vazia..." << endl;
    }else{
        cout << endl << "Carros no drive-thru!" << endl;
    }
    while (!carros.empty())
    {
        if (carros.size()>1)
        {
            cout << endl << "Tamanho da fila: " << carros.size() << " carros" << endl;
            cout << endl << "Ultimo carro da fila: " << carros.back() << endl;
            cout << endl << "Primeiro carro da fila: " << carros.front() << endl;
        }else{
            cout << endl << "Primeiro carro da fila: " << carros.front() << endl;
        }
        for (size_t i = 0; i < 1000000000; i++);    //um delay improvisado.
        carros.pop();       //Retira o primeiro ítem da fila
    }
    


    return 0;
}