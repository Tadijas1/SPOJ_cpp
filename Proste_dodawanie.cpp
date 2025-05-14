#include <iostream>

using namespace std;

int t;
long ile;
long wynik;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        wynik=0;
        cin>>ile;
        long liczby[ile];

        for (long i = 0; i < ile; i++)
        {
            cin>>liczby[i];
            wynik+=liczby[i];
        }
        cout<<wynik<<endl;
    }

    return 0;
}