#include <iostream>
#include <math.h>
using namespace std;
#define ola cout  << endl << "Hi, you..." << endl;
#define escolha cout << endl << "Selecione a Funcao: " << endl << "1 - FIBONACCI;" << endl << "2 - FATORIAL;" << endl
#define erro cout << endl << "Escolha INVALIDA..." << endl;

uint16_t opcao;
uint16_t resp;

void fibonacci(int res=0, uint16_t num1=1, uint16_t num2=0, uint16_t count=0);
int fatorial(uint16_t num2=0, uint16_t fat=0);
void decisao(uint16_t opcao);
void espera();

int main(){
    opcao = 0;
    resp = 0;
    ola;
    escolha;
    cin >> opcao;
    decisao(opcao);

    return 0;
}

void decisao(uint16_t opcao){
    switch (opcao)
    {
        case 1:
            fibonacci();
            break;

        case 2:
            resp = fatorial(6,1);//mesmo estabelecendo os argumentos padrões, mas trata-se de uma função com retorno e pede a declaração dos argumentos para envio.
            cout << "Resposta 5! = " << resp << endl;
            break;
        
        default:
            erro;
            espera();
            main();
            break;
    }   
}

void espera(){
    for (uint16_t reading = 0; reading <= 10; reading++)
    {
        for (size_t i = 0; i < 1000000000; i++);
        cout << "[ " << reading*10 << "% ]" << endl;
    }
}

void fibonacci(int res, uint16_t num1, uint16_t num2, uint16_t count){
    if (count <= 100)
    {
        res=num1 + num2;
        cout << num1 << " + " <<  num2 << " = " << res <<endl << "================" << endl;
        num2=num1;
        num1=res;
        ++count;
        fibonacci(res, num1, num2, count);//Recursividade. A função chama ela mesma.
    }
}

int fatorial(uint16_t num2, uint16_t fat){
    while (num2>0)
    {
        fat *= num2;
        --num2;
        fatorial(num2, fat);
    }
    return fat;
}
