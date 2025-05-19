#include <iostream>
#include <vector>

using namespace std;

int t;
string slowo;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>slowo;

        int ile = 0;
        for (int i = 0; i <= slowo.size(); i++)
        {
            if(slowo[i]==slowo[i-1]){
                ile++;
            }
            else if(ile>2){
                ile++;
                cout<<slowo[i-1]<<ile<<""<<slowo[i]<<"";
                ile=0;
                
            }
            else{
                if((ile<2)&&(slowo[i]!=slowo[i-1])){
                  cout<<slowo[i-1]<<""<<slowo[i]<<"";
                  ile=0;  
                }
                else{
                    cout<<slowo[i]<<"";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}


//mama