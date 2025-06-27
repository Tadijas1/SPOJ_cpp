#include <iostream>

using namespace std;

int ile, przesuniecie;

int main()
{
    cin>>ile>>przesuniecie;
    int tab[ile];
    int wynik[ile];
    
    for (int i = 0; i < ile; i++)
    {
        cin>>tab[i];
    }
    
    for (int i = 0; i < przesuniecie; i++)
    {
        
        wynik[ile-1]=tab[0];

        for (int i = 0; i < ile-1; i++)
        {
            wynik[i]=tab[i+1];
        }

        for (int i = 0; i < ile; i++)
        {
            tab[i]=wynik[i];
        }
    }

    for (int i = 0; i < ile; i++)
    {
        cout<<wynik[i]<<" ";
    }
    cout<<endl;

    return 0;
}