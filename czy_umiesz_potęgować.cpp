#include <iostream>

using namespace std;

int t;
long a, b;

int main()
{
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        a=a%10;
        switch (b%4)
        {
        case 1:
            cout<<a%10<<endl;
        break;
        case 2:
            cout<<(a*a)%10<<endl;
        break;
        case 3:
            cout<<(a*a*a)%10<<endl;
        break;
        case 0:
            cout<<(a*a*a*a)%10<<endl;
        break;
        }
    }
    
    return 0;
}