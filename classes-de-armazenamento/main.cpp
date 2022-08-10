#include <iostream>
#include <vector>

using namespace std;

int soma(int n1,int n2){
    return n1+n2;
}

int main(){
    auto num{10};
    auto nome{"Expedito Neto"};
    auto valor{10.5};

    cout << nome << endl;

    vector<int>v{10,20,30,40,50,60,70};

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it <<endl;
    }
    cout << "====================="<<endl;
    for(auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }
    cout << "====================="<<endl;
//A especificação "register" indica que preferencialmente a variável será armazenada em um registrador, tendo assim um acesso mais rápido a mesma e otimizando o processamento dos dados.
    for (register auto ite = v.begin(); ite != v.end(); ite++)
    {
        cout << *ite <<endl;
    }
    cout << "====================="<<endl;

    auto res=soma(10.3,5.2);

    cout << res << endl;

//Static é um modificador de acesso
    return 0;
}