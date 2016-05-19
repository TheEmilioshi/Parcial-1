#include <iostream>

using namespace std;
int num;
char cont;

int main()
{
    cont= 'S';
    while(cont=='S' || cont=='N')
    {
        while(cont=='S')
        {
            cout<<"Ingrese un numero...:";
            cin>>num;
            cout<< "Desea continuar? si:S y no:N ";
            cin>>cont;
        }
        break;
    }

}
