#include <iostream>

using namespace std;

int t, ile;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>ile;
        int tab[ile];

        for (int i = 0; i < ile; i++)
        {
            cin>>tab[i];
        }
        
        for (int i = 1; i < ile; i+=2)
        {
            cout<<tab[i]<<" ";
        }
        
        for (int i = 0; i < ile; i+=2)
        {
            cout<<tab[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}