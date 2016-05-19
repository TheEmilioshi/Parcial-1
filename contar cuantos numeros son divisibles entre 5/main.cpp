#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int i=0,nume=0;
   int num;
   while (i<10)
   {
       cout<<"Ingresar numero: ";
       cin>>num;
       i++;

       if (num%5==0)
       {
           nume++;
       }

    }

   cout<<"Divisibles entre 5: "<<nume<<"\n";

   system("PAUSE");
    return 0;
}
