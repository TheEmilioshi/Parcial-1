#include <iostream>

using namespace std;
int horas,pagohoras;
float pagot;
/* ingresar las horas, el pago por hora
luego el pagot
*/

int main()
{
    cout << "Ingresar las horas: ";
    cin>>horas;

    cout<<"Ingresar pago por hora: ";
    cin>>pagohoras;

    pagot=horas*pagohoras;
    cout<<"Pago Total: "<<pagot<<"\n";
}
