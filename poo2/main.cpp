#include <iostream>
#include "cliente.h"
#include <cstdlib>
#include <stdlib.h>
#include <math.h>
using namespace std;
int x;
int main(){
    system("clear");
    Cliente *cl1=new Cliente(0,0,0);
    cl1->Consulta();

    cl1->setNconta(rand());
    cl1->setNagencia(rand());
    cl1->setNome("Expedito");
    cl1->setSobreNome("Avelino");
    cl1->setCpf("040.379.583-41");
    cl1->setRg("200300915610");
    cl1->setCep("60.165-070");
    cl1->setLogradouro("Rua Silva Jatahy");
    cl1->setNresidencia(920);
    cl1->setComplemento("Atp 202 B");
    cl1->Consulta();

    Cliente *cl2=new Cliente(0,0,0);
    cl2->Consulta();

    cl2->setNconta(rand());
    cl2->setNagencia(rand());
    cl2->setNome("Rachel");
    cl2->setSobreNome("Avelino");
    cl2->setCpf("011.755.653-00");
    cl2->setRg("200100915610");
    cl2->setCep("60.165-070");
    cl2->setLogradouro("Rua Silva Jatahy");
    cl2->setNresidencia(920);
    cl2->setComplemento("Atp 202 B");
    cl2->Consulta();
    return 0;
}