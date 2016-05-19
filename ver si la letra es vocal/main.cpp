#include <iostream>
#include<stdlib.h>
using namespace std;


int main()
{

    char letra;
    cout <<"Ingrese una letra: ";
    cin>>letra;


    switch(letra)
    {
       case 1:
        cout<<"es vocal";
        break;

        default:
        cout<<"no es vocal";
        break;
    }
    return 0;
}
