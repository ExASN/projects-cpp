#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
    public:
        int tipo;
        string Vnome;
        string GetNome();
        void SetNome(string nm);
};

int main(){
    int num{10};
    string nome{"Expedito\0Neto"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"MG","Belo Horizonte"}};

    Pessoa p1{"Expedito",32};
    Pessoa p2{"Rachel",40};

    Veiculo v1{2,"Carango"};

    cout<<v1.tipo<<endl;
    cout<<v1.GetNome()<<endl;
    v1.SetNome("Carreta");
    cout<<v1.GetNome()<<endl;
    
    for (vector<int>::iterator it=valores.begin(); it!=valores.end(); it++)
    {
        cout<<*it<<endl;
    }
    

    for (map<string,string>::iterator it = capitais.begin(); it != capitais.end(); it++)
    {
        cout << it -> first <<" - " << it -> second <<endl;
    }
    

    return 0;
}

string Veiculo::GetNome(){
    return Vnome;
}
void Veiculo::SetNome(string nm){
    Vnome=nm;
}