#include <iostream>
#include <vector>

using namespace std;

int x;
vector<int> dane;
long wynik;

int main()
{
    while(cin>>x) {
        dane.push_back(x);
    }

    wynik=dane[0];
    cout<<wynik<<endl;

    for (int i = 1; i < dane.size(); i++)
    {
        wynik+=dane[i];
        cout<<wynik<<endl;
    }
    
}