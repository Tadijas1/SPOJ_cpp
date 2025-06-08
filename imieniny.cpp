#include <iostream>

using namespace std;

int t;
long uczniowie, cukierki;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>uczniowie>>cukierki;
        if(uczniowie!=1){
            if(cukierki%(uczniowie-1)==0){
                cout<<"NIE"<<endl;
            }
            else{
                cout<<"TAK"<<endl;
            }
        }
        else{
            cout<<"TAK"<<endl;
        }
    }
    
    return 0;
}