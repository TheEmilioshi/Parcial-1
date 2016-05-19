#include <iostream>
#include<stdlib.h>

using namespace std;
int num1,num2,num3;


int main()
{
    cout <<"Ingrese numero 1: ";
    cin>>num1;

    cout <<"Ingrese numero 2: ";
    cin>>num2;

    cout <<"Ingrese numero 3: ";
    cin>>num3;

    if ((num1>=num2) and (num2>=num3))
        cout<<"los numeros son:"<<num1,num2,num3<<"\n";
    return 0;
}
