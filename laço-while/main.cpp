#include <iostream>
using namespace std;
uint16_t x = 1, y = 1;
int main(){
    system("clear");
    while (x<101)
    {
        y = 0;
        while (x<101 && y<10)
        {
            cout << "X = " << x <<"   ";
            x++;
            y++;
        }
        cout << endl <<"===============================================================================================" << endl;
    }
}