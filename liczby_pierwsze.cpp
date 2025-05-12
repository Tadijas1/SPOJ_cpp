#include <iostream>

using namespace std;

long t;
int liczba;
bool czy=true;

int main()
{

    cin>>t;

    for (long i = 0; i < t; i++)
    {
        cin>>liczba;

        for (int i = 2; i < liczba; i++)
        {
            if(liczba%i==0){
               czy=false;
            }
        }

        if((czy==false)||(liczba==1)){
            cout<<"NIE"<<endl;
        }
        else{
            cout<<"TAK"<<endl;
        }
        czy=true;
    }

    return 0;
}