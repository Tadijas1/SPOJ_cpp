#include <iostream>

using namespace std;

int t;
long liczba1, liczba2;

int nwd(int a, int b)
{
    bool czy=false;
    long max;

    if(a>b) max=a;
    else if(b>a) max=b;
    else max=a;


    while(czy==false)
    {
        if((a%max==0)&&(b%max==0)){
            czy=true;
        }
        else{
            max--;
        }
    }
    return max;
}

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>liczba1>>liczba2;
        cout<<nwd(liczba1, liczba2)<<endl;
    }
    

    return 0;
}