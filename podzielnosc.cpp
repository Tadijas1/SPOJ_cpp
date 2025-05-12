#include <iostream>

using namespace std;

int t;
long n, x, y;

int main()
{

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n>>x>>y;

        for (long i = 0; i < n; i++)
        {
            if(((i%x)==0)&&((i%y)!=0)){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        
    }

    return 0;
}