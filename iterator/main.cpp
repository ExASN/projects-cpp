#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    system("clear");
    std::vector<string>produtos;
    produtos.push_back("mouse");
    produtos.push_back("teclado");
    produtos.push_back("monitor");
    produtos.push_back("gabinete");
    produtos.push_back("cx.som");

    std::vector<string>::iterator it;
    it=produtos.begin();
    advance(it,3);
    produtos.insert(it,"estabilizador");
    //next
    //prev
    //advance(it,1);
    /* - Declaração do iterator diretamente do laço de repetição
        for (std::vector<string>::iterator it=produtos.begin(); it!=produtos.end(); it++)
    {
        cout<<*it<<endl;
    }
    */
    for (it=produtos.begin(); it!=produtos.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}