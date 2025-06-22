#include <iostream>

using namespace std;

int t;
char pesel[11];
int suma;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        suma=0;
        for (int i = 0; i < 11; i++)
        {
            cin>>pesel[i];
        }
        for (int i=0; i < 11; i++)
        {
            if ((i==0)||(i==4)||(i==8)||(i==10)) suma+=pesel[i]-'0';
            else if((i==1)||(i==5)||(i==9)) suma+=(pesel[i]-'0')*3;
            else if((i==2)||(i==6)) suma+=(pesel[i]-'0')*7;
            else suma+=(pesel[i]-'0')*9;
        }
        if(suma%10==0) cout<<"D"<<endl;
        else cout<<"N"<<endl;
    }
    
    return 0;
}