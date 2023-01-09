#include <iostream>
#include <vector>

using namespace std;

void show(vector<int>tab)
{
    for(int i=0; i<tab.size(); i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}

void revertshow(vector<int>tab)
{
    for(int i=tab.size()-1; i>=0; i--)
    {
        cout<<tab[i];
    }
    cout<<endl;
}

vector<int>convert(long long x)
{
    vector<int>wynik;
    do
    {
        int tmp=x%10;
        wynik.push_back(tmp);
        x=x/10;
    }
    while(x>0);
    return wynik;
}

bool czypesel(vector<int>pesel)
{
    vector<int>waga={1,3,1,9,7,3,1,9,7,3,1};
    int suma=0;
    for(int i=1; i<pesel.size(); i++)
    {
        suma+=pesel[i]*waga[i];
    }
    int m=suma%10;
    int kontrolna;
    if(m==0)
    {
        kontrolna=0;
    }
    else
    {
        kontrolna=10-m;
    }

    if(kontrolna==pesel[0])
    {
        return true;
    }
    return false;
}

int main()
{
    long long pesel=55030101193;
    vector<int>p1=convert(pesel);
    while(p1.size()<11)
    {
        p1.push_back(0);
    }
    revertshow(p1);

    if(czypesel(p1))
    {
        cout<<"jest to pesel"<<endl;
    }
    else
    {
        cout<<"nie jest to pesel"<<endl;
    }

    return 0;
}
