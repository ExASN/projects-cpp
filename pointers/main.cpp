#include <iostream>
using namespace std;

void somar(float *var, float valor);
void iniVetor(int *v);

int main(){
//======== VARIÁVEIS E PONTEIROS LOCAIS =========================
    string veiculo="Carro"; //Criação da variável veiculo do tipo string
    string *pv;             //Criação do ponteiro pv do tipo string

    int *pn;                //Criação do ponteiro *pn do tipo int.
    int vetor[5];           //Criação do array vetor do tipo int.
    float num = 0;

//=================== ALGORÍTIMO ============================


    pv = &veiculo;          //Armazena o endereço de veiculo no ponteiro pv
    cout << pv << "\n" << &veiculo << "\n";     //imprime o valor armazenado no ponteiro pv e o endereço da memoria alocada pela variável veiculo
    *pv = "Moto";      //A variável para onde o ponterio pv aponta, recebe o valor Moto
    cout << "\n" << veiculo << "\n" << *pv << "\n";     //Imprime o valor armazenado na variável veiculo e onde o ponteiro pv aponta.

    somar(&num, 15);
    cout<<"\n\n"<<num<<"\n\n";
    iniVetor(vetor);
    for (int i = 0; i < 5; i++)
    {
        cout<<"\n\n"<<vetor[i]<<"\n\n";
    }
    
    return 0;
}

void somar(float *var, float valor){
    *var+=valor;
}

void iniVetor(int *v){
    for (int i = 0; i < 5; i++)
    {
        v[i]=i;
    }
}