#include <iostream>
#include <math.h>
using namespace std;
#define ql cout << endl << "==========================================================================================="<< endl;
#define imp cout << "X = " << x << "   ";

int main(){
    system("clear");
    for (uint16_t x = 1; x < 51;)
    {
        for (uint32_t tempo = 0 ; tempo < 1000000000 ; tempo++); //For sem corpo para forçar um delay.
        for (uint16_t y = 1; y < 11 && x < 51; y++,x++)
        {
            imp;
        }
        ql;
    }
    
}