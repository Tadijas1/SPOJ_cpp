#include <iostream>

using namespace std;

long trasy;
long long wynik=0;

int main()
{
    cin>>trasy;
    long zysk[trasy];

    for (long i = 0; i < trasy; i++)
    {
        cin>>zysk[i];
    }

   cout<<wynik<<endl; 

    return 0;
}