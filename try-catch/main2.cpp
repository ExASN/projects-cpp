#include <iostream>                     //Biblioteca padrão de I/O

using namespace std;

double divide(double,double);           //Protótipo da função divide
int main(){

    double n1, n2;                      //Variáveis locais tipo double

    cin>>n1>>n2;

    try
    {
        cout << divide(n1,n2)<<endl;
    }
    catch(const char* e)                //Catch recebe um ponteiro do tipo char como retorno do throw da função divide que foi chamada no try
    {
        cout <<"ERRO: " << e << '\n';
    }
    
    return 0;
}
double divide(double n10, double n20){
    if(n20==0){
        throw "Erro de divisao po ZERO...";
    }
    if (n10>=10)
    {
        throw "N1 precisa ser menor que 10...";
    }
    return n10/n20;
    
}