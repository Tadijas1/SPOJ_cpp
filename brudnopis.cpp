#include <iostream>
#include <vector>

using namespace std;

int x;
vector<int> dane;

int main()
{
    while(cin>>x) {
        dane.push_back(x);
    }

    for (int i = 0; i < dane.size(); i++)
    {
        cout<<dane[i]<<endl;
    }
    
}
