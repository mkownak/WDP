// ConsoleApplication6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

int suma(vector<int>tab)
{
    int wynik = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        wynik += tab[i];
    }
    return wynik;
}

void wypisz(vector<int>tab)
{
    
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int min(vector<int>tab)
{
    int min = tab[0];
    for (int i = 0; i < tab.size(); i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    return min;
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

bool czyNalezy(vector<int>tab, int element)
{
    return index(tab,element) > -1;
}

bool czyzawiera(vector<int>tab1, vector<int>tab2)
{
    int a = 0;
    for (int i = 0; i < tab2.size(); i++)
    {
        for (int j = 0; j < tab1.size(); j++)
        {
            if (tab2[i] == tab1[j])
            {
                a = 1;
                break;
            }
            else
            {
                a = 0;
            }
        }
        if (a == 0)
        {
            return false;
        }
        
    }

    if (a == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<int>unikalne(vector<int>tab)
{
    vector<int>wynik;
    int a = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        for (int j = 0; j < tab.size(); j++)
        {
            if (i == j)
            {
                continue;
            }

            if (tab[i] == tab[j])
            {
                a = 1;
            }
        }
        if (a == 0)
        {
            wynik.push_back(tab[i]);
        }
        a = 0;
    }
    return wynik;
}


int main()
{
    vector<int>tab = { 1,2,3,4,5 };
    vector<int>tab2 = { 4,5 };
    
    vector<int>tab3 = { 7,3,1,4,5,3,1,2,7 };
    vector<int>tab4 = unikalne(tab3);
    wypisz(tab4);


    
}
