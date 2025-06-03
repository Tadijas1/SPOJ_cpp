#include <iostream>

using namespace std;

int t;
long a, b;
long wieksza, mniejsza, zamiana;
bool czy;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        czy=false;
        cin>>a>>b;

        if((a>b)||(a==b)){
            wieksza=a;
            mniejsza=b;
        }
        else if(b>a){
            wieksza=b;
            mniejsza=a;
        }
        while(czy==false){
            if(wieksza-mniejsza<=0){
                cout<<wieksza+mniejsza<<endl;
                czy=true;
            }
            else{
                wieksza-=mniejsza;
                if(mniejsza>wieksza){
                    zamiana=wieksza;
                    wieksza=mniejsza;
                    mniejsza=zamiana;
                }
            }
        }

    }

    return 0;
}