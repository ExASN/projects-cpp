#include <iostream>
#include <stack> //Biblioteca necessárria para trabalhar com pilhas

using namespace std;

int main(){
    stack <string> carros;                      //Cria uma pilha que vai armazenar variáveis do tipo string. O nome da pilha é "carros".
    carros.push("Ford - Ka");                   //O pomando push("") insere um elemento no topo da pilha.
    carros.push("Ford - Ecosporte");
    carros.push("Renault - Sandero");
    carros.push("Jeep - Compass");

    cout << "O ultimo carro comprado foi : " 
        << carros.top() << endl;                //O comando top() consulta o elemento no topo da pilha.

    cout << "Quantidade de carros que temos: " 
        <<carros.size() << endl;                //O comando size() informa o tamanho da pilha.

    carros.pop();                               //O comando pop() descarta o elemento no topo da pilha.

    cout << "O ultimo carro comprado foi : " 
        << carros.top() << endl;

    cout << "Quantidade de carros que temos: " 
        <<carros.size() << endl;

    return 0;
}