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
    void setNome(string nm);
    void setSobreNome(string snm);
    void setLogradouro(string log);
    void setComplemento(string cmp);
    void setCpf(int c);
    void setRg(int r);
    void setCep(int ce);
    void setNresidencia(int n);
    void setNagencia(int na);
    void setNconta(int nc);
    void setTipoConta(int tc);
    void setPacote(int pct);
    string getNome();
    string getSobreNome();
    string getLogradouro();
    string getComplemento();
    int getCPF();
    int getRg();
    int getCep();
    int getNresidencia();
    int getNagencia();
    int getNconta();
    int getTipoConta();
    int getPacote();

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

void Cliente::setNome(string nm){
    firstName=nm;
}
void Cliente::setSobreNome(string snm){
    lastName=snm;
}
void Cliente::setLogradouro(string log){
    logradouro=log;
}
void Cliente::setComplemento(string cmp){
    complemento=cmp;
}
void Cliente::setCpf(int c){
    cpf=c;
}
void Cliente::setRg(int r){
    rg=r;
}
void Cliente::setCep(int ce){
    cep=ce;
}
void Cliente::setNresidencia(int n){
    nResidencia=n;
}
void Cliente::setNagencia(int na){
    nAgencia=na;
}
void Cliente::setNconta(int nc){
    nConta=nc;
}
void Cliente::setTipoConta(int tc){
    tipoConta=tc;
}
void Cliente::setPacote(int pct){
    pacote=pct;
}

int Cliente::getNconta(){
    return nConta;
}
int Cliente::getNagencia(){
    return nAgencia;
}
string Cliente::getNome(){
    return firstName;
}
string Cliente::getSobreNome(){
    return lastName;
}
int Cliente::getCPF(){
    return firstName;
}
int Cliente::getRg(){
    return rg;
}
string Cliente::getLogradouro(){
    return logradouro;
}
int Cliente::getNresidencia(){
    return nResidencia;
}
string Cliente::getComplemento(){
    return complemento;
}
int Cliente::getCep(){
    return cep;
}

void Cliente::Consulta(){
    cout<<"Numero da Conta.......: "<<nConta<<endl;
    cout<<"Numero da Agencia.....: "<<nAgencia<<endl;
    cout<<"Nome do Cliente.......: "<<firstName<<endl;
    cout<<"Sobrenome do Cliente..: "<<lastName<<endl;
    cout<<"Cad. de Pesso Fisica..: "<<cpf<<endl;
    cout<<"Registro Geral........: "<<rg<<endl;
    cout<<"Endereço do Cliente...: "<<logradouro<<endl;
    cout<<"Complemento...........: "<<complemento<<endl;
    cout<<"CEP...................: "<<cep<<endl;
}

#endif