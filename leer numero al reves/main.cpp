#include <iostream>
#include<stdlib.h>

using namespace std;
int main()
{
int numero, centenas, unidad, unos;
cout<<"digite un numero de 3 digitos"<<endl;
cin>>numero;
centenas = numero%100;
unidad = numero%10;
unos = unidad%10;
if (numero > 99 and numero < 1000)
{
    cout<<centenas;
    cout<<unidad;
    cout<<unos;
    cout<<"\n";
}
else
cout<<"Error, debe digitar un numero de 3 digitos"<<endl;


system("pause");
return 0;
}
