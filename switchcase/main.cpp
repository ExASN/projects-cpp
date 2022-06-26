#include <iostream>
using namespace std;

uint16_t transporte = 0;
char escolha = '0';

int main(){
    start:
        system("clear");// limpa a tela do terminal.
        transporte = 0;//inicialização de variáveis.
        escolha = '0';//inicialização de variáveis.
            cout << "Ola Voce!" << endl << "Escolha o tipo de transporte:" << endl;
            cout << "1 - Carro;" << endl << "2 - Moto;" << endl << "3 - Onibus;" << endl << "4 - Metro;" << endl << "5 - Aviao;" << endl;
            cin >> transporte;

                switch (transporte)
                {
                case 1:
                    cout << "Parabens, aqui estao as chaves do seu carro!";
                    break;
                case 2:
                    cout << "Parabens, aqui estao as chaves da sua moto!" << endl;
                    break;
                case 3:
                    cout << "Parabens, aqui estao suas passagens de onibus!" << endl;
                    break;
                    case 4:
                    cout << "Parabens, aqui estao suas passagens de metro!" << endl;
                    break;
                    case 5:
                    cout << "Parabens, aqui estao suas passagens de aviao!" << endl;
                    break;
                default:
                    cout << "Opcao invalida. Deseja realizar nova escolha?" << endl << "s - SIM;" << endl << "n - NAO" << endl;
                    cin >> escolha;
                    break;
                }
            if (escolha=='s')
            {
                goto start;
            }else{
                cout << "The End!" << endl;
            }
}