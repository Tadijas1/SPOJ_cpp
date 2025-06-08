#include <iostream>
#include <vector>

using namespace std;

int32_t wynik;
int x, y;
vector<int> dane;
char znak;

int main()
{
    while (cin>>znak>>x>>y)
    {
        if(znak=='+'){
            wynik=x+y;
            cout<<wynik<<endl;
        }
        else if(znak=='-'){
            wynik=x-y;
            cout<<wynik<<endl;
        }
        else if(znak=='*'){
            wynik=x*y;
            cout<<wynik<<endl;
        }
        else if(znak=='/'){
            wynik=x/y;
            cout<<wynik<<endl;
        }
        else if(znak=='%'){
            wynik=x%y;
            cout<<wynik<<endl;
        }
        else{
            cout<<"Nie dziala"<<endl;
        }
    }
    
    return 0;
}