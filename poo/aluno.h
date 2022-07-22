#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

using namespace std;
class aluno
{
private:
    /* data */
public:
    string nome;
    int idade;
    string cidade;
    string bairro;
    string mae;
    string nivel;
    int serie;
    aluno(int ensino);
    void Consulta();
    ~aluno();
};

aluno::aluno(int ensino)//método construtor
{
    if (ensino==0)
    {
        this->nome="Neto";
        this->idade=2;
        this->cidade="Fortaleza";
        this->bairro="Parangaba";
        this->mae="Marlene";
        this->nivel="pre-escola";
        this->serie=1;
    }else if(ensino==1){
        this->nome="Felipe";
        this->idade=15;
        this->cidade="Paracuru";
        this->bairro="Novo Pracuru";
        this->mae="Marilia";
        this->nivel="ensino medio";
        this->serie=2;        
    }else if(ensino==2){
        this->nome="Expedito";
        this->idade=10;
        this->cidade="Fortaleza";
        this->bairro="Meireles";
        this->mae="Rachel";
        this->nivel="ensino fundamental";
        this->serie=5;
    }
}

void aluno::Consulta(){
    cout<<"Nome do Aluno..............: "<<nome<<endl;
    cout<<"Idade do Aluno.............: "<<idade<<endl;
    cout<<"Cidade onde mora...........: "<<cidade<<endl;
    cout<<"Bairro onde mora...........: "<<bairro<<endl;
    cout<<"Nome da Mae do Aluno.......: "<<mae<<endl;
    cout<<"O aluno esta matriculado na: "<<nivel<<endl;
    cout<<"O aluno esta cursando a ...: "<<serie<<endl;
    cout <<"----------------------------------------------"<<endl;
}

aluno::~aluno()
{
}

#endif