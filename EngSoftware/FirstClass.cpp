/* * * * * * * * * * * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * * * * * * * * * 
* * *    Projeto EngSoftware
* * *    Eng. Expedito A. Silva Neto
* * *    09-14-2022
* * *    Cutiba - PR
* * * * * * * * * * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <stdio.h>

using namespace std;

class Pessoa{

    private:
    string nome;
    int32_t idade;
    bool eCivil;


    public:
    Pessoa(const string pNome, const int32_t pIdade, const bool PeCivil) 
    : nome(pNome)
    , idade(pIdade)
    , eCivil(PeCivil)
    {
        cout << "Novo Cadastro realizado" << endl;
    }
    void ConsultaNome()
    {
        cout << this->getNome() << endl;
        cout << "----------------------------" << endl;
    }
    void ConsultaIdade()
    {
        cout << this->getIdade() << endl;
        cout << "----------------------------" << endl;
    }
    void ConsultaEstadoCivil()
    {
        if (this->getEcivil() != NULL)
        {
            cout << "Casado" << endl;
            cout << "----------------------------" << endl;
        }
        else
        {
            cout << "Solteiro" << endl;
            cout << "----------------------------" << endl;
        }
    }
    void AlteraNome(const string n)
    {
        this->setNome(n);
    }
    void AlteraIdade(const int i)
    {
        this->setIdade(i);
    }
    void AlteraEstadoCivil(const bool e)
    {
        this->setEcivil(e);
    }

    protected:
    void setNome(const string pNome)
    {
        nome = pNome;
        cout << "Nome Atualizado" << endl;
    }
    void setIdade(const int32_t pIdade)
    {
        idade = pIdade;
        cout <<"Idade Atualizada" << endl;
    }
    void setEcivil(const bool peCivil)
    {
        eCivil = peCivil;
        cout <<"Estado civil Atualizado" << endl;       
    }
    string getNome()
    {
        return nome;
    }
    int getIdade()
    {
        return idade;
    }
    bool getEcivil()
    {
        return eCivil;
    }


};

int main(){

    Pessoa p1("Expedito", 32, 1);
    p1.ConsultaNome();
    p1.ConsultaIdade();
    p1.ConsultaEstadoCivil();

    p1.AlteraNome("Rachel");
    p1.AlteraIdade(40);
    p1.AlteraEstadoCivil(0);

    p1.ConsultaNome();
    p1.ConsultaIdade();
    p1.ConsultaEstadoCivil();

    return 0;
}