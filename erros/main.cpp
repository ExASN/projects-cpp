#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main(){

    std::vector<int>num(6);
    try
    {
        num.at(5)=10;
        cout<<num[5]<<endl;
    }
    catch(exception& e)
    {
        cout <<"ERRO: " << e.what() << "\n";
    }
    
    /*
    num.at(5)=10;
    cout<<num[5]<<endl;
    */
    return 0;
}