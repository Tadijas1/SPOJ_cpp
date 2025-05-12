#include <iostream>

using namespace std;

int liczba;
int liczba1=42;
int ile_42=0;
bool czy=false;

int main()
{
    while(czy==false)
    {
        cin>>liczba;
        if((liczba1!=42)&&(liczba==42)){
            cout<<liczba<<endl;
            ile_42++;
            liczba1=liczba;
            if(ile_42==3) czy=true;
        }
        else{
            liczba1=liczba;
            cout<<liczba<<endl;
        }
    }
    return 0;
}