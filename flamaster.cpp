#include <iostream>
#include <vector>

using namespace std;

int t;
string slowo;
int ile = 1;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>slowo;

        ile=1;
        for (int i = 0; i < slowo.size(); i++)
        {
            if(slowo[i]==slowo[i+1]){
                ile++;
            }
            else if(ile>2){
                cout<<slowo[i]<<ile;
                ile=1;
            }
            else{
                if(ile==2){
                    cout<<slowo[i-1]<<slowo[i];
                    ile=1;
                }
                else if(ile==1) cout<<slowo[i];
            }
        }
        cout<<endl;
    }

    return 0;
}