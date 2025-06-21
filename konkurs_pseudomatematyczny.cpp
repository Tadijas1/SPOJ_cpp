#include <iostream>
#include <vector>

using namespace std;

int t, ile_z, f;
int tab;

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
        for (int i = 0; i < 2; i++)
        {
            for (int j = ile_z-1; j>=1; j--)
            {
                if (wyniki[j]>wyniki[j-1])
                {
                    int bufor; bufor=wyniki[j-1];
                    wyniki[j-1]=wyniki[j];
                    wyniki[j]=bufor;
                }
                
            }
            
        }
        
        //DODAWANIE NOWEJ TABLICY !!!!!!!!!!!!!!!!! TU NIE PASUJE COŚ!!!!!!!!!!!!!!!!!
        if(wyniki[0]==wyniki[1]) f=2;
        else f=1;

        int n_tab[ile_z-f];
        tab=0;

        for (int i = f; i < ile_z-f; i++)
        {
            n_tab[tab]=wyniki[i];
            tab++;
        }

        //WYPISYWANIE
        for (int i = 0; i < ile_z-f; i++)
        {
            cout<<n_tab[i]<<" ";
        }
        cout<<endl;

        //SORTOWANIE N_TAB
        for (int i = 0; i < ile_z-f; i++)
        {
            for (int j = ile_z-f-1; j>=1; j--)
            {
                if (n_tab[j]<n_tab[j-1])
                {
                    int bufor; bufor=n_tab[j-1];
                    n_tab[j-1]=n_tab[j];
                    n_tab[j]=bufor;
                }
                
            }
            
        }
        
        //WYPISYWANIE
        for (int i = 0; i < ile_z-f; i++)
        {
            cout<<n_tab[i]<<" ";
        }
        cout<<endl;
        
        
        //TWORZENIE OSTATECZNEJ TABLICY
        tab=0;
        for (int i = f; i < ile_z-f; i++)
        {
            wyniki[f]=n_tab[tab];
        }

        //WYPISYWANIE
        for (int i = 0; i < ile_z; i++)
        {
            cout<<wyniki[i]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}
