#include <iostream>
#include<stdlib.h>
using namespace std;
int n1,n2,n3;

int main()
{
    cout <<"Ingrese numero 1: ";
    cin>>n1;

    cout<<"Ingrese numero 2: ";
    cin>>n2;

    cout<<"Ingrese numero 3: ";
    cin>>n3;

    if ((n1>n2) and (n1>n3))
    {
        cout<<"Numero mayor es el "<<n1<<"\n";

    }
    else if (n2>n3)
    {
        cout<<"Numero mayor es el "<<n2<<"\n";

    }
    else
    {
        cout<<"Numero mayor es el "<<n3<<"\n";
    }
    cout<<"\n";
    system("PAUSE");
}
