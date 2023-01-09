#include <iostream>

using namespace std;

int main()
{
    double a,b,c,x;
    a=0.52;
    b=1.60;
    c=-5.44;
    if(a==0)
    {
        if(c-b==0)
        {
            cout<<"NWR"<<endl;
        }
        else
        {
            cout<<"BR"<<endl;
        }
    }

    x=(c-b)/a;
    cout<<x;

    return 0;
}
