#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED
using namespace std;
class Veiculo
{
private:
    int tipo;
    int velMax;
    bool armas;
public:
    int combustivel;
    int rodas;
    int vel;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArmas(bool arm);
    void setCombustivel(int cmb);
    void setRodas(int rds);
    void setVel(int velo);
    Veiculo();
    void Consulta();

    ~Veiculo();
};

Veiculo::Veiculo()
{
}

void Veiculo::setTipo(int tp){
    tipo=tp;
}
void Veiculo::setVelMax(int vm){
    velMax=vm;
}
void Veiculo::setArmas(bool arm){
    armas=arm;
}
void Veiculo::setCombustivel(int cmb){
    combustivel=cmb;
}
void Veiculo::setRodas(int rds){
    rodas=rds;
}
void Veiculo::setVel(int velo){
    vel=velo;
}

void Veiculo::Consulta(){
    if(tipo==1){
        cout<<"Veiculo do tipo........: Moto"<<endl;
    }else if(tipo==2){
        cout<<"Veiculo do tipo........: Carro"<<endl;
    }else if(tipo==3){
        cout<<"Veiculo do tipo........: Onibus"<<endl;
    }else if(tipo==4){
        cout<<"Veiculo do tipo........: Trator"<<endl;
    }else if(tipo==5){
        cout<<"Veiculo do tipo........: Tanque"<<endl;
    }
cout<<"A Velocidade Maxima eh.: "<<velMax<<endl;
cout<<"Tem armas .............: "<<armas<<endl;
cout<<"Esta com combustivel em: "<<combustivel<<endl;
cout<<"Rodas..................: "<<rodas<<endl;
cout<<"Velocidade instatanea..: "<<vel<<endl;
cout<<"-----------------------------------------------"<<endl;
}

Veiculo::~Veiculo()// 1 - moto; 2 - carro; 3 - onibus; 4 - trator; 5 - tanque
{  
}

class Moto:public Veiculo
{
private:
    /* data */
public:
    Moto();
    ~Moto();
};

Moto::Moto()
{
    setTipo(1);
    setVelMax(120);
    setArmas(false);

}
Moto::~Moto()
{
}

class Carro:public Veiculo
{
private:
public:
    Carro();
};
Carro::Carro(){
    setTipo(2);
    setVelMax(180);
    setArmas(false);
}

class Tanque:public Veiculo{
private:
public:
    Tanque();
};
Tanque::Tanque(){
    setTipo(5);
    setVelMax(90);
    setArmas(true);
}

#endif // VEICULO_H_INCLUDED