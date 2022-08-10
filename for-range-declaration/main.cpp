#include <iostream>
#include <vector>

using namespace std;

int main(){

    int x[10]{0,1,2,3,4,5,6,7,8,9};  //--> for-range-declaration
    vector<int>n{90,80,70,60,50,40,30,20,10};       //--> for-range-declaration
    const char* nome{"Expedito"};       //--> for convencional

    for (auto &&i : x)      //for(tipo range:valores recebidos no range)
    {
        cout <<  i <<endl;
    }
    cout << "=================================\n\n";
    for (auto &&i : n)      //for(tipo range:valores recebidos no range)
    {
        cout <<  i <<endl;
    }
    cout << "=================================\n\n";
    for (int i = 0; i <= sizeof(nome); i++)
    {
        cout << nome[i] << endl;
    }
    cout << "=================================\n\n";
    cout << "\n\n";
    return 0;
}