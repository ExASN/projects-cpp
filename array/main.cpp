#include <iostream>
#include <math.h>
using namespace std;

uint16_t fun[10] = {0};
#define bl cout << endl << "=================" << endl;
#define imp cout << "Vetor Y ["<< y <<"]: " << fun[y];

int main(){
    for (uint y = 0; y < sizeof(fun)/2; y++)
    {
       fun[y] = y * 10;
       imp;
       bl;
    }

}