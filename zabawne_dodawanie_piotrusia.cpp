#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int t, zamiana;
int ile=0;
char slowo;
string liczba, liczba_o;
bool glowna_p, czy;

int main()
{
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>liczba;

        glowna_p=false;
        ile=0;
        while(glowna_p==false){
            czy=false;
            for (int i = 0; i < liczba.length()/2; i++)
            {
                if(liczba[i]!=liczba[liczba.length()-i-1]){
                    czy=true;
                }
            }
            if(czy==false){
                glowna_p=true;
            }
            else{
                liczba_o=liczba;
                for (int i = 0; i < liczba.length()/2; i++)
                {
                    slowo=liczba_o[i];
                    liczba_o[i]=liczba_o[liczba_o.length()-i-1];
                    liczba_o[liczba_o.length()-i-1]=slowo;
                }
                zamiana=stoi(liczba)+stoi(liczba_o);
                liczba=to_string(zamiana);
                ile++;
            }
        }
        cout<<liczba<<" "<<ile<<endl;
    }
    

    return 0;
}