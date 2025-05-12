#include <iostream>

using namespace std;

int t;
int a, b;
int liczba_c[2];
bool czy=false;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;

        if(a>b) liczba_c[i]=a;
        else if(b>a) liczba_c[i]=b;


        while(czy==false){
            if((liczba_c[i]%a==0)&&(liczba_c[i]%b==0)){
                czy=true;
            }
            else{
                liczba_c[i]++;
            }
        }
        czy=false;
    }
    
    for (int i = 0; i < 2; i++)
    {
        cout<<liczba_c[i]<<endl;
    }
    

    return 0;
}