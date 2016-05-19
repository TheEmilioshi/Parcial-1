#include <iostream>
#include<stdlib.h>
#include <ctime>

using namespace std;


int main()
{
   srand(time(NULL));
   int i, n, aleatorio;
   cout << "Numero"<<"\n";
     for (i = 0; i <= 0; i ++)
   {
             aleatorio = rand()%(200-1+1)+1;
             cout << aleatorio << "\n";

    if (aleatorio<=60 and aleatorio>=14)
   {
       cout<<"entre 14-60";
   }
   else if (aleatorio<=90 and aleatorio>=61)
   {
       cout<<"entre 61-90";
   }
   else if (aleatorio<=160 and aleatorio>=91)
   {
       cout<<"entre 91-160";

   }
   else if (aleatorio<=200 and aleatorio>=161)
   {
       cout<<"entre 161-200";
   }

   }

   system("pause");
}
