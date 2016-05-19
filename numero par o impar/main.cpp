#include <iostream>
#include <stdlib.h>

using namespace std;
int numero;

int main()
{
    cout <<"Ingrese Numero: ";
    cin>>numero;

    if (numero%2 == 0)
    {
        cout<<"Es un numero par";
    }
    else
    {
        cout<<"Es un numero impar";
    }
    cout<<"\n";

    system("PAUSE");
    return 0;
}
