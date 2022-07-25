#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(){
    fstream archive;
    char opc = 's';
    string dateInput;

    archive.open("file.txt",ios::out | ios::app);

    while (opc=='s' or opc=='S')
    {
        cout << "Digite um nome ou frase...\n";
        cin >> dateInput;
        archive << dateInput << endl;
        cout << "\nDeseja continuar? [s/n]\n";
        cin >> opc;
        system("clear");
    }
    archive.close();

    cout << "Nomes Digitados...\n\n";

    archive.open("file.txt", ios::in);
    if(archive.is_open()){
        while (getline(archive,dateInput))
        {
            cout << dateInput << endl;
        }
    }else if(!archive.is_open()){
        cout << "O arquivo nao pode ser aberto...\n\n";
    }

    archive.close();
    
    return 0;
}