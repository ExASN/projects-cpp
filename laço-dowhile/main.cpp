#include <iostream>
using namespace std;
uint16_t x = 0, y = 0;
#define ql cout << endl << "===========================================================================" << endl;
#define imp cout << "X = " << x << "   ";

int main(){
    x = 50;
    do
    {
        y = 10;
        do
        {
            imp;
            x--;
            y--;
        } while (y>0);
        ql;
    } while (x>0);
    
}