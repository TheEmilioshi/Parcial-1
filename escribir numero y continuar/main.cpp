#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int num,cp=0,mayor=0;
char resp;

int main()
{
    do
    {
        cout<<"ingresar numero: ";
        cin>>num;
        if (num%2==0)
        {
            cp++;
            if (num>mayor)
                mayor=num;
        }

        do
        {
            cout<<"continuar... ";
            cin>>resp;
        }while((resp!='S') and (resp!='N'));
    }while(resp!='N');
    cout<<"mayor de los pares... "<<mayor<<"\n";

    return 0;
}
