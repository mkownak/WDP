// ConsoleApplication28.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<vector>
#include<map>

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

int max(vector<int>tab)
{
    int max = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

int index(vector<int>tab, int element)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == element)
        {
            return i;
        }
    }
    return -1;
}

bool CzyNalezy(vector<int>tab, int element)
{
    return index(tab, element) > -1;
}

bool CzyZawiera(vector<int>tab, vector<int>tab2)
{
    for (int i = 0; i < tab2.size(); i++)
    {
        if (!CzyNalezy(tab, tab2[i]))
        {
            return false;
        }
    }
    return true;
}

vector<int>unikalne(vector<int>tab)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (!CzyNalezy(wynik, tab[i]))
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

vector<int>podzielnosc(vector<int>tab, int dzielnik, int reszta = 0)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % dzielnik == reszta)
        {
            wynik.push_back(tab[i]);
        }
    }
    return wynik;
}

vector<int>generuj(int n, int max)
{
    vector<int>wynik;
    for (int i = 0; i < n; i++)
    {
        wynik.push_back(rand() % max);
    }
    return wynik;
}

vector<int>zlicz(vector<int>tab)
{
    vector<int>wynik;
    vector<int>temp = unikalne(tab);
    for (int i = 0; i < temp.size(); i++)
    {
        int licznik = 0;
        for (int j = 0; j < tab.size(); j++)
        {
            if (temp[i] == tab[j])
            {
                licznik++;
            }
        }
        wynik.push_back(licznik);
    }
    return wynik;
}

void wypisz(map<int, int>m)
{
    for (auto& el : m)
    {
        cout << el.first << " ";
        cout << el.second << endl;;
    }
    cout << endl;
}

map<int, int>zlicz(vector<int>tab, vector<int>zliczone)
{
    vector<int>temp = unikalne(tab);
    map<int, int>wynik;
    for (int i = 0; i < temp.size(); i++)
    {
        wynik.insert({ temp[i],zliczone[i] });
    }
    return wynik;
}

int main()
{
    srand(time(NULL));
    vector<int>tab = { 8,7,1,2,2,7,8,9,9,10};
    //wypisz(unikalne(tab));
    //wypisz(zlicz(tab));

    map<int, int>m;
    m.insert({ -20000,5 });
    m.insert({ 1,5 });
    wypisz(zlicz(tab,zlicz(tab)));
}




//   1. przykład do zadania
//   2. sprawdzenie czy przyklad jest kompletny
//   3. sformalizowanie przykładu
//   4. ustalenie nagłowka funkcji
//   5. instrukcja funkcji
//   6. testy funkcji
