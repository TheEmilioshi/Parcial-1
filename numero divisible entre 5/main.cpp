#include <iostream>

using namespace std;
/*ingresar un numero de hasta 4 cifras
pero puede ingresar uno mayor.
el programa debera de escribir cuantas ifras tiene el numero*/
int numero;

int main()
{
    cout <<"Ingresar numero: ";
    cin>>numero;

    if (numero<0)
        numero*=(-1); //numero=numero*(-1)

    if (numero<=9)
        cout<<"Tiene una cifra...";
    else if(numero<=99)
        cout<<"Tiene dos cifras...";
    else if(numero<=999)
        cout<<"Tiene tres cifras...";
    else
        cout<<"Tiene cuatro o mas cifras...";
    return 0;
}
