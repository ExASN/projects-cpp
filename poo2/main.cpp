#include <iostream>
#include "cliente.h"
#include <cstdlib>
using namespace std;
int main(){

    Cliente *cl1=new Cliente(0,0,0);
    cl1->Consulta();
    return 0;
}