#include <iostream>

using namespace std;

int liczba[100];
long wynik;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if(i==0){
            cin>>liczba[i];
            wynik=liczba[i];
        }
        else{
            cin>>liczba[i];
            wynik=wynik+liczba[i];
        }
        cout<<wynik<<endl;
    }
    
    return 0;
}