#include <iostream>
#include <stdlib.h>

using namespace std;
int acumulado,examen,total;

int main()
{
    cout << "Ingrese nota acumulada: ";
    cin>>acumulado;

    cout<<"Ingrese nota del examen: ";
    cin>>examen;

    total=acumulado+examen;
    if (total>=57 and total<=59)
    {
        total=60;
    }
    else
    {
        total=acumulado+examen;
    }

    cout<<"Nota Final: "<<total<<"\n";

    system("PAUSE");
    return 0;
}
