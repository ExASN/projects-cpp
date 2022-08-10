#include <iostream>
#include <vector>

using namespace std;

int soma(int n1,int n2){
    return n1+n2;
}

void somador();

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
    cout << "====================="<<endl;
    
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();

    return 0;
}

//Static é um modificador de acesso. Esse parâmetro define o armazenamento da variável com uma posição estática na memória do pc e por isso essa variável é declarada apenas uma vez, mesmo que sua declaração esteja dentro de um loop de repetição.
void somador(){
    static auto x = 0;
    x++;
    cout << x << endl;
}