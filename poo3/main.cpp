#include <iostream>
#include "veiculo.h"
#include <stdlib.h>

using namespace std;

int main(){
    system("clear");
    Moto *mt1=new Moto;
    mt1->Consulta();
    mt1->setRodas(2);
    mt1->setCombustivel(50);
    mt1->setVel(60);
    mt1->Consulta();
    Carro *cr1=new Carro;
    cr1->Consulta();
    cr1->setRodas(4);
    cr1->setCombustivel(75);
    cr1->setVel(120);
    cr1->Consulta();
    Tanque *tq1=new Tanque;
    tq1->Consulta();
    tq1->setRodas(6);
    tq1->setCombustivel(30);
    tq1->setVel(70);
    tq1->Consulta();
    return 0;
}