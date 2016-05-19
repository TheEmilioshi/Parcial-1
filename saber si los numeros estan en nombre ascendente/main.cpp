#include <iostream>
#include<stdlib.h>
using namespace std;
int num1,num2,num3;

int main()
{
    cout<<"Ingrese numero 1: ";
    cin>>num1;

    cout<<"Ingrese numero 2: ";
    cin>>num2;

    cout<<"Ingrese numero 3: ";
    cin>>num3;

    if ((num3>num2) and (num2>num1))
    {
        cout<<"estan en orden ascendiente.";
    }
    else
    {
        cout<<"no estan en orden ascendente.";
    }

    cout<<"\n";

    system("PAUSE");
    return 0;
}
