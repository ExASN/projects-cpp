#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

uint16_t grades = 0;
string answer = "0";

int main(){
    start:
    system ("clear"); //Comando para limpar a tela do terminal
    cout << "Ola voce!"<< endl <<"Digite o valor final da nota do aluno:" << endl;
    cin >> grades;
    answer=(grades>=70) ? "approved" : "disapproved";
    (answer=="approved") ? cout<<"Aluno aprovado por media!" << endl << "Deseja cadastrar outra nota? s / n" : cout << "Aluno reprovado!" << endl << "Deseja cadastrar outra nota? s / n";
    cout << endl;
    cin >> answer;
    //(answer=="s") ? goto start : cout << "The end!";
    if(answer=="s"){
        goto start;
    } else{
        cout << "The end!" << endl;
    }
}