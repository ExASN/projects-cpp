#include <iostream>
#include <math.h>
using namespace std;
#define delt cout << endl << "DELTA..." << endl << delta  << endl;
#define raiz1 cout << endl << "RAIZ 1..." << endl << x1  << endl;
#define raiz2 cout << endl << "RAIZ 2..." << endl << x2  << endl;

float a, b, c, delta, x1, x2;

void raizes(float a, float b, float c);
int main(){
    system("clear");
cout << endl << "Ola Voce..." << endl;
cout << endl << "Informe o Valor de a: " << endl;
cin >> a;
cout << endl << "Informe o Valor de b: " << endl;
cin >> b;
cout << endl << "Informe o Valor de c: " << endl;
cin >> c;
raizes(a, b, c);
}

void raizes(float a, float b, float c){
delta = ((b*b)-4)*a*c;
delt;
if (delta == 0)
{
 x1 = (-b)/2*a;
 x2 = x1;
 raiz1;
 raiz2;
}else if (delta > 0)
{
 x1 = (-b + sqrt(delta))/2*a;
 x2 = (-b - sqrt(delta))/2*a;
 raiz1;
 raiz2;
}else if (delta < 0)
{
    cout << endl << "NAO EXISTEM RAIZES REAIS..." << endl;
}

}