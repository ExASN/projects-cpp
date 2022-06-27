#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

char p1[50];
char p2[50];
char le = '\0';
uint16_t n = 0, cont = 0, life = 0;
int main(){
ini:
system("clear");
cout << "BEM VINDO AO JOGO DA FORCA..."<< endl;
cout << "Informe sua OPCAO:" << endl << "1 - GAME;"<< endl <<"2 - END GAME;"<< endl;
cin >> n;
switch (n)
{
case 1:
    start:
            for (uint16_t i = 0; i <= 10; i++)
                {
                    for (uint32_t t = 0; t < 100000000; t++);
                    cout << endl << "[ " << i*10 << " % ]" << endl;
                }
system("clear");
n = 0;
cout << "Ola Voce!" << endl;
cout << "Vamos brincar ?" << endl;
cout << "Digite uma palavra" << endl;
cin >> p1;
system ("clear");
    for (uint16_t i = 0; i < 50; i++)
    {
        if (p1[i]!='\0')
        {
            p2[i] = '\0';
            n++;
        } else{
            break;
        }
        }
cout << endl;
cout << "A palavra tem [" << n << "] letras..."<< endl;
cont = n;
cont--;
life = n + 5;
    while (n!=0)
    {
        if (life!=0)
        {
            cout << endl << "==================" << endl;
            cout << "Restam [" << life << "] chances..."<< endl;
            cout << "Digite uma letra: " << endl;
            cin >> le;
            system("clear");
            cout << "Restam [" << n << "] letras..."<< endl;
            for (uint16_t p = 0; p <= cont; p++)
            {

                if(p1[p]=='\0'){
                    goto restart;
                }else if(le != p1[p] && p1[p]!='\0'){
                    goto restart;
                }else if (le == p1[p] && p1[p]!='\0'){
                    p2[p] = p1[p];
                    p1[p] = '\0';
                    n--;
                }
                    restart:
                    cout << p2[p] << " | ";
            }
            life--;
        }else if (life == 0)
        {
            cout << endl << "YOU LOSE..." << endl;
            goto start;
        }
        
    }
cout << endl << "Congratulations! YOU WINNER!!" << endl;
cout << endl << "==================" << endl;
cout << p2 << endl;
cout << endl << "==================" << endl;
goto ini;
    break;
case 2:
goto end;
    break;
default:
cout << endl << "OPCAO INVALIDA..." << endl;
goto ini;
    break;
}
end:
system("clear");
cout << "";
}