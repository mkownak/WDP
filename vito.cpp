#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<int>tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int suma(vector<int>tab)
{
    int wynik = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        wynik += tab[i];
    }
    return wynik;
}

int index(vector<int>tab, int a)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == a)
        {
            return i;
        }
    }
    return -1;
}

bool czynalezy(vector<int>tab, int a)
{
    return index(tab, a) > -1;
}

int distance(int a, int b)
{
    return abs(a - b);
}

vector<int>dystansy(vector<int>tab)
{
    vector<int>wynik = {};
    int suma = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        for (int j = 0; j < tab.size(); j++)
        {
            suma += distance(tab[i], tab[j]);
        }
        wynik.push_back(suma);
        suma = 0;
    }
    return wynik;
}

int minvalue(vector<int>tab,vector<int>tab2)
{
    int min = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    

    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == min)
        {
                return tab2[i];
        }
    }
    return -1;
}

int main()
{

    vector<int>domy = { 5,1,8,3,4,9 };
    vector<int>dystans = dystansy(domy);
    wypisz(domy);
    wypisz(dystans);
    
    cout << "Nr domu o najmniejszym dystansie: " << minvalue(dystans,domy) << endl;

    
}
