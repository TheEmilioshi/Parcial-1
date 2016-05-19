#include <iostream>

using namespace std;
int n1,n2,suma;

void ingresar(int &n1, int &n2)
{
    cout<<"Ingresar n1... ";
    cin>>n1;

    cout<<"Ingresar n2... ";
    cin>>n2;
}

int main()
{
    ingresar(n1,n2);

    cout<<"valor de n1 "<<n1<<"\n";
    cout<<"valor de n2 "<<n2<<"\n";
}
