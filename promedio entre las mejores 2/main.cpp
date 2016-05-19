#include <iostream>
#include <stdlib.h>

using namespace std;
double nota1,nota2,nota3,prome;

int main()
{
    cout <<"Ingresar nota 1: ";
    cin>>nota1;

    cout<<"Ingresar nota 2: ";
    cin>>nota2;

    cout<<"Ingresar nota 3: ";
    cin>>nota3;

     if ((nota1>nota3)and(nota2>nota3))
    {
        prome=(nota1+nota2)/2;
    }

    else if ((nota2>nota1) and (nota3>nota1))
    {
        prome=(nota2+nota3)/2;
    }
    else if ((nota1>nota2) and (nota3>nota2))
    {
        prome=(nota1+nota3)/2;
    }
    else (nota1=nota2=nota3);
    {
        prome=(nota1+nota2+nota3)/3;
    }

    cout<<"Nota promedio de las 2 mas altas es: "<<prome<<"\n";

    system("PAUSE");
    return 0;
}
