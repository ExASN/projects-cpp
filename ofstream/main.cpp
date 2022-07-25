#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("file.txt", ios::app);
    arquivo <<"Expedito Avelino da Silva Neto\n";
    arquivo <<"Analista de Software\n";
    arquivo <<"Progress Rail Locomotivas do Brasil\n";
    arquivo.close();
    return 0;
}