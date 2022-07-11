/*
- A classe pré-definida struct, favorece a criação de uma estrutura.
*/
//Cabeçalho
#include<iostream>
//Definição de parametros globais
using namespace std;
//Desenvolvimento
struct Aviao                //Criação da struct Aviao com suas variáveis.
{
    string nome;
    string modelo;
    string cor;
    int pot;
    int velMax;
};

int main(){
    Aviao av1, av2, av3;        //Instanciamento dos objetos av1, av2, av3 do tipo struct Aviao.
    //Atribuição de valores das variáveis dos objetos instanciados.
    av1.nome = "Executivo";
    av2.nome = "Combate";
    av3.nome = "Comercial";
    //======================
    av1.modelo = "Jatinho";
    av2.modelo = "F14";
    av3.modelo = "Bimotor";
    //======================
    av1.cor = "Azul";
    av2.cor = "Amarelo";
    av3.cor = "Verde";
    //======================
    av1.pot = 700;
    av2.pot = 1300;
    av3.pot = 2200;
    //======================
    av1.velMax = 300;
    av2.velMax = 700;
    av3.velMax = 900;
    //======================
    cout << "Nome.............: " << av1.nome << "\n";
    cout << "Modelo...........: " << av1.modelo << "\n";
    cout << "Cor..............: " << av1.cor << "\n";
    cout << "Potencia.........: " << av1.pot << "\n";
    cout << "Velocidade Maxima: " << av1.velMax << "\n";
    cout << "=========================================== \n";
    cout << "Nome.............: " << av2.nome << "\n";
    cout << "Modelo...........: " << av2.modelo << "\n";
    cout << "Cor..............: " << av2.cor << "\n";
    cout << "Potencia.........: " << av2.pot << "\n";
    cout << "Velocidade Maxima: " << av2.velMax << "\n";
    cout << "=========================================== \n";
    cout << "Nome.............: " << av3.nome << "\n";
    cout << "Modelo...........: " << av3.modelo << "\n";
    cout << "Cor..............: " << av3.cor << "\n";
    cout << "Potencia.........: " << av3.pot << "\n";
    cout << "Velocidade Maxima: " << av3.velMax << "\n";
    //========================
    return 0;
}