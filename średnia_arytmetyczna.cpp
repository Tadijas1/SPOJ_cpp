#include <iostream>
#include <cmath>

using namespace std;

int t;
int n;
float srednia;

int main()
{

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        srednia=0;
        cin>>n;
        int tablica[n];
        float roznica[n];
        int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

        for (int i = 0; i < rozmiar; i++)
        {
            cin>>tablica[i];
        }

        for (int i = 0; i < rozmiar; i++)
        {
            srednia=srednia+tablica[i];
        }

        srednia=srednia/rozmiar;

        for (int i = 0; i < rozmiar; i++)
        {
            roznica[i]=srednia-tablica[i];
            roznica[i]=abs(roznica[i]);
        }

        float m;
        int liczby_w;
        m=roznica[0];
        liczby_w=tablica[0];

        for (int i = 1; i < rozmiar; i++)
        {
            if(m>roznica[i]){
                m=roznica[i];
                liczby_w=tablica[i];
            }
        }

        cout<<liczby_w<<endl;
        
    }

    return 0;
}