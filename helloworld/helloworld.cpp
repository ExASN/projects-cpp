#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    /*vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }*/
    int x = 0, y = 0, z = 0;

    for (size_t i = 0; i < 10; i++)
    {
        x = i;
        //cout << "x = " << x << endl;
        printf("X = %d\n", x);
    }
    
    cout <<"Hello World!"<< endl;
}