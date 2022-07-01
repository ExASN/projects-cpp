#include <iostream>

using namespace std;

int main(){
    enum Armas{fuzil, revolver, rifle, escopeta};

    Armas armaSel;
    armaSel = fuzil;
    cout << armaSel << endl;

    return 0;
}