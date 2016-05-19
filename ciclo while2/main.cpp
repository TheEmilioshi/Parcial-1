#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
//presentar numeros del 1-10
int contador;
int numero;
int suma;
int mayor;
int menor;


int main()
{   srand(time(0));
    contador=0;
    suma=0;
    mayor=0;
    while (contador<10)
    {   numero=1 + rand() % (100-1);
    suma=suma+numero;
    if (mayor<numero)
    {
        mayor=numero;
    }
    if (menor>numero)
    {
        menor=numero;
    }
    if(numero>50);
    {con50++;


    }

        contador++;
        cout<<contador<<" Numero "<<numero<<"\n";


    }
    cout<<"promedio mayores a 50"
    cout<<"Final del programa"<<"\n";

    return 0;
}
