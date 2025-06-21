#include <iostream>

using namespace std;

int t, ile_z, f;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        //WPROWADZANIE DANYCH
        cin>>ile_z;
        int wyniki[ile_z];

        for (int i = 0; i < ile_z; i++)
        {
            cin>>wyniki[i];
        }
        
        //SORTOWANIE BOMBELKOWE
        for (int i = 0; i < ile_z; i++)
        {
            for (int j = ile_z-1; j>=1; j--)
            {
                if (wyniki[j]<wyniki[j-1])
                {
                    int bufor; bufor=wyniki[j-1];
                    wyniki[j-1]=wyniki[j];
                    wyniki[j]=bufor;
                }
                
            }
            
        }
        //ILE JEST NAJWIĘKSZYCH LICZB
        f=1;
        while ((f < ile_z)&&(wyniki[ile_z-1]==wyniki[ile_z-1-f]))
        {
            if(f==ile_z) break;
            else f++;
        }
        
        //WSTAWIANIE NAJWIĘKSZYCH LICZB DO NOWEJ TABLICY
        int tab[ile_z];

        for (int i = 0; i < f; i++)
        {
            tab[i]=wyniki[ile_z-1-i];
        }
        //WSTAWIANIE RESZTY LICZB DO NOWEJ TABLICY
        int x=0;
        for (int i = f; i < ile_z; i++)
        {
            tab[i]=wyniki[x];
            x++;
        }
        
        //WYPISYWANIE
        for (int i = 0; i < ile_z; i++)
        {
            cout<<tab[i]<<" ";
        }
        cout<<endl;

    }
}