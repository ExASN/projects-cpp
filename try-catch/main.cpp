/*
 - Tratamento de Erros
 - Eng. Expedito Avelino da S. Neto
 - Fortaleza - Ce, 8 de agosto de 2022
*/
#include <iostream>     //Biblioteca padrão para entradas e saidas
#include <vector>       //VBiblioteca para trabalho com vetores
#include <stdexcept>    //Biblioteca para tratamento de exceções (erros)

using namespace std;

int main(){

    try{
        vector<int>num(5);
        num.at(4)=10;
        cout<<num[4]<<endl;
    }catch(exception& erro){
        cout<<"ERRO: "<< erro.what() <<endl;
    }

    return 0;
}