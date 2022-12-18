#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream ZAPIS("dane.txt");
    ZAPIS<<"faza"<<endl;
    ZAPIS<<"Wiedzmin"<<endl;
    ZAPIS<<3<<endl;
    ZAPIS<<"najlepszy"<<endl;
    ZAPIS.close();

    ifstream ODCZYT("dane.txt");
    string wiersz;
    while (!ODCZYT.eof())
    {
        getline(ODCZYT,wiersz);
        cout << wiersz << endl;
    }
    ODCZYT.close();

    return 0;
}
