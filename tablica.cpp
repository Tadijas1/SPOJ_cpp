#include <iostream>
#include <vector>

using namespace std;

int x;
vector<int> dane;
int zamiana;

int main()
{
    while(cin>>x) {
        dane.push_back(x);
    }

    for (int i = 0; i < dane.size()/2; i++)
    {
        zamiana=dane[i];
        dane[i]=dane[dane.size()-i-1];
        dane[dane.size()-i-1]=zamiana;
    }

    for (int i = 0; i < dane.size(); i++)
    {
        if(i==dane.size()-1){
            cout<<dane[i]<<endl;
        }
        else{
            cout<<dane[i]<<" ";
        }
    }

    return 0;
}