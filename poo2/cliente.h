/*
 - CLASSE DE CLIENTES DO BANCO
 - AUTHOR: ENG. EXPEDITO AVELINO DA SILVA NETO
 - FORTALEZA - CE, 22-07-2022
*/
#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
//#include <time.h>
using namespace std;

class Cliente
{
private:
    int id, cpf, rg, cep, nResidencia, pacote, tipoConta, nAgencia, nConta;
    string firstName, lastName, logradouro, complemento;
    //date nascimento;
    
public:
    void Consulta();
    Cliente(int perfil, int tpConta, int idCliente);
    ~Cliente();
};

Cliente::Cliente(int perfil, int tpConta, int idCliente)    //Método construtor
{   //0 - Conta Poupança; 1 - Conta Salário, 2 - Conta Corrente;
    //0 - Não de aplica; 1 - Básico; 2 - Universitário; 3 - Starter; 4 - Premium; 5 - Exclusive
    id = idCliente;
    nAgencia = 0;
    nConta = 0;
    cpf = 0;
    rg = 0;
    cep = 0;
    nResidencia = 0;
    firstName = "Cliente Novo";
    lastName = "Cliente Novo";
    logradouro = "Sem registro";
    complemento = "Sem registro";
    if(tpConta == 0){  
        tipoConta = tpConta;//"Conta Poupança";
        pacote = 0;//"Não se aplica pacote de beneficios";
    }
}

Cliente::~Cliente()
{
}


void Cliente::Consulta(){
    cout<<"Numero da Conta.......: "<<nConta<<endl;
    cout<<"Numero da Agencia.....: "<<nAgencia<<endl;
    cout<<"Nome do Cliente.......: "<<firstName<<endl;
    cout<<"Sobrenome do Cliente..: "<<firstName<<endl;
    cout<<"Cad. de Pesso Fisica..: "<<cpf<<endl;
    cout<<"Registro Geral........: "<<rg<<endl;
    cout<<"Endereço do Cliente...: "<<logradouro<<endl;
    cout<<"Complemento...........: "<<complemento<<endl;
    cout<<"CEP...................: "<<cep<<endl;
}

#endif