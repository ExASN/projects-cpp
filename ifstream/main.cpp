#include <iostream>
#include <fstream>

using namespace std;

int main(){
    /*
    ofstream output;
    output.open("file.txt", ios::app);
    output << "Analista de Software\n";
    output << "Engenharia de Produto\n";
    output << "Desenvolvimento de Sistemas Embarcados\n";
    output.close();
    */
    ifstream input;
    string linha;
    input.open("file.txt");
    if(input.is_open()){
        while (getline(input,linha))
        {
            cout << linha << endl;
        }
    } else if(!input.is_open()){
        cout << "Arquivo nao pode ser aberto..." << endl;
    }
    input.close();
    return 0;
}