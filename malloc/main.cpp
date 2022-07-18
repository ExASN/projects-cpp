#include <iostream>                  //Biblioteca padrão para entradas e saídas
#include <stdio.h>                   //Biblioteca para entradas e saídas standard, necessária para a função gets.
#include <stdlib.h>                  //Biblioteca standard padrão, necessária para a função malloc.

using namespace std;                 //Namespace standard.

int main(){
    char *vnome;                     //declaração de um ponteiro vnome do tipo char.
    vnome = (char *) malloc(sizeof(char)+1);            //O ponteiro vnome ten seu tamanho definido.
    gets(vnome);                    //A função gets lê a entrada, armazena no buffer e transfere para vnome.
    cout << vnome << "\n\n";                  //Imprime na tela do usuário o valor armazenado em vnome.
    return 0;
}
//É importante observar que, na linha 9 a função malloc define o tamanho da memória a ser alocado conforme a sizeof retorna o tamanho do tipo char e soma 1 para o caractere de finlização.