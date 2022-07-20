#include<iostream>
#include<vector>

using namespace std;

int main(){

    std::vector<int>num1;
    std::vector<int>num2;
    int tam1, tam2, i;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(5);

    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.push_back(10);

    //num1.swap(num2);

    num1.insert(num1.end()-1,25);
    num1.erase(num1.end()-2);
    tam1 = num1.size();
    tam2 = num2.size();

    std::cout<<"Primeiro valor armazenado no Vector Num1: "<<num1.front()<<std::endl;
    std::cout<<"Ultimo valor armazenado no Vector Num1..: "<<num1.back()<<std::endl;
    std::cout<<"Valor do meio no Vector Num1............: "<<num1.at(tam1/2)<<std::endl;
    std::cout<<"Tamanho do Vector: "<<tam1<<std::endl;

    for(i=0;i<tam1;i++){
        cout<<num1[i]<<" | ";
    }
    cout<<endl;
    for (i=0;i<tam2;i++)
    {
        cout<<num2[i]<<" | ";
    }

    while (!num1.empty())
    {
        num1.pop_back();
    }
    cout<<endl<<num1.size()<<endl;
    return 0;
}