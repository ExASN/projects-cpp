/*
Uso da biblioteca Listas

*/

#include <iostream>
#include <list>

int count = 20;

int main()
{
    std::list<int> teste(9,8);

    std::list<int> lista;
    std::list<int>::const_iterator it;

for (int i = 0; i <= count; ++i)
{
    lista.push_front(i);
}

// it = lista.begin();
// std::advance(it,5);
// lista.insert(it,50);
//  lista.erase(it);

lista.merge(teste);
int tam = lista.size();

std::cout << tam << std::endl << "============" << std::endl;
std::cout << teste.size() << std::endl << "============" << std::endl;
for (int i = 0; i < tam; ++i)
{
    //lista.sort();
    std::cout << lista.front() << std::endl;
    lista.pop_front();
}

    return 0;
}