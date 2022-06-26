#include <iostream>
#include <math.h>
using namespace std;
#define bl cout << endl << "=====================" << endl;
#define sl cout << "| ";
#define imp cout << mat[x][y] << " | ";
u_int16_t mat[4][4] = {0};
u_int16_t l = 0;

int main(){
    system("clear");
    cout << "Ola Voce!" << endl;
    for (u_int16_t x = 0; x < 4;x++)//sizeof(matriz)/16
    {
        for (u_int16_t y = 0; y < 4; y++)
        {
            cout << "Informe um valor:" << endl << "MATRIZ ["<< x <<"]["<< y << "]:" << endl;
            cin >> l;  
            mat[x][y] = l;
            cout<<endl;
        }
    }
        for (u_int16_t x = 0; x < 4;x++)//sizeof(matriz)/16
    {
     sl;
        for (u_int16_t y = 0; y < 4; y++)
        {
          imp;
        }
     bl;
    }
}