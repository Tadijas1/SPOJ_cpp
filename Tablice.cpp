#include <iostream>

using namespace std;

int t, ile, zamiana;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>ile;

        int liczby[ile];

        for (int i = 0; i < ile; i++)
        {
            cin>>liczby[i];
        }

        for (int i = 0; i < ile/2; i++)
        {
            zamiana=liczby[i];
            liczby[i]=liczby[ile-i-1];
            liczby[ile-i-1]=zamiana;
        }
        
        for (int i = 0; i < ile; i++)
        {
            if(i==ile-1){
                cout<<liczby[i]<<endl;
            }
            else{
                cout<<liczby[i]<<" ";
            }
        }
        
    }

    return 0;
}