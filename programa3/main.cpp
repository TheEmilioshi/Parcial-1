#include <iostream>

using namespace std;
/*ingresar la nota acumulada y el examen del
alumno y presentar la nota final.*/

int acumu,exam,nota;

int main()
{
    cout << "Ingresar Nota Acumulada: ";
    cin>>acumu;

    cout<<"Ingresar Nota del Examen: ";
    cin>>exam;

    nota=acumu+exam;
    cout<<"Nota Final: "<<nota<<"\n";

    if(nota>=60)
    {
        cout<<"APROBADO";
    }
    else
    {
        cout<<"REPROBADO";
    }
    cout<<"\n";
}
