#include <iostream>
#include <cmath>

using namespace std;

int t;
long a, b;

int potegowanie(long x, long y)
{
    return (int)pow(x, y);
}

int main()
{
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        cin>>a;
        cin>>b;
        cout<<potegowanie(a, b)<<endl;
    }
    
    return 0;
}