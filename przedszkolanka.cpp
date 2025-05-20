#include <iostream>

using namespace std;

int t;
int a, b;
int liczba_c;
bool czy;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        czy=false;

        cin>>a>>b;

        if(a>b){
           liczba_c=a; 
        }
        else if(b>a){
            liczba_c=b;
        }
        else{
            liczba_c=a;
        }

        while(czy==false){
            if((liczba_c%a==0)&&(liczba_c%b==0)){
                czy=true;
            }
            else{
                liczba_c++;
            }
        }
        cout<<liczba_c<<endl;
    }

    return 0;
}