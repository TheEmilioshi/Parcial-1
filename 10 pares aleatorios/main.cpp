#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int main()
{
    int num, c=0;
    srand(time(NULL));

    while(c<10)
    {
        num = 1+rand()%(101-1);


        c++;

    }

    return 0;
}
