#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

char nombre[40];
int turno;
float ventas,ihss,comis,pc,tp;

void ingresar (char nombre, float &ventas, int &turno)
{
    cout<<"Nombre del empleado... ";
    cin.getline(nombre,40);
    cout<<"Ingresar ventas... ";
    cin>>ventas;

    do
    {
        cout<<"Ingresar el turno... ";
        cin>>turno;

    }while(!((turno>=1) and (turno<=3)));

}
float pcomision(int turno)
{
    switch(turno)
    {
    case 1:
        return 0.05;
        break;
    case 2:
        return 0.04;
        break;
    default:
        return 0.06;
        break;
    }
}

void calcular(float ventas, int turno, float &pc, float &comis, float &ihss, float &tp)
{
    pc=pcomision(turno);
    comis=ventas*pc;
    if(comis>7000)
        ihss=245;
    else
        ihss=0.035*comis;
        tp=comis-ihss;
}

void presentar (float &pc, float &comis, float &ihss, float &tp)
{

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
