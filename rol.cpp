#include <iostream>

using namespace std;

int t, ile, bufor;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>ile;
        int tab[ile];
        int wynik[ile];

        for (int i = 0; i < ile; i++)
        {
            cin>>tab[i];
        }
        
        wynik[ile-1]=tab[0];

        for (int i = 0; i < ile-1; i++)
        {
            wynik[i]=tab[i+1];
        }

        for (int i = 0; i < ile; i++)
        {
            cout<<wynik[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}