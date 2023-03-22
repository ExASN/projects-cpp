//Header
#include <iostream>
#include <vector>
#include <stdlib.h>

//Namespace
using namespace std;

//Global variables
float num;
float vetor[10];
char *vnome;
vector <int> numer;

//Prototipe
void somar(float *dad, float dados);
void startVector(float *vet,float vetVal,int vetSize);

//Main function
int main()
{
    // somar(&num,15);
    // cout << num << endl;
    // startVector(vetor,23,10);
    // for (int x = 10; x > 0; x--)
    // {
    //     cout << vetor[x] << endl;
    // }

    // vnome = (char*) malloc(sizeof(char)+1);
    // gets(vnome);
    // cout << vnome << endl;

    for (int i = 0; i < 10; i++)
    {
        numer.push_back(i+20);
        cout << endl << numer.size() << "  --  " << numer.back() << endl;
    }
    system("pause");
    
    return 0;
}

//Somar function
void somar(float *dad, float dados)
{
    *dad+=dados;
}

//startVector Function
void startVector(float *vet,float vetVal,int vetSize)
{
    for(int x=vetSize;x>0;x--){
       vet[x] = vetVal; 
    }

}