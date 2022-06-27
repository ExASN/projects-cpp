#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
   if (argc > 1)
   {
        if(!strcmp(argv[1], "sol"))
        { 
            cout << "Vou ao clube";
        }else if (!strcmp(argv[1],"nublado"))
        {   
            cout << "Vou ao cinema" << endl;
        }else{
            cout << "Vou ficar em casa";
        }
   }
}