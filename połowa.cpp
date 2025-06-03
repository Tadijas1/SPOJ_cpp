#include <iostream>
#include <string>

using namespace std;

int t;
string slowo;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>slowo;

        //slowo.length()

        for (int i = 0; i < slowo.length()/2; i++)
        {
            cout<<slowo[i];
        }
        
        cout<<endl;

    }
    
    return 0;
}