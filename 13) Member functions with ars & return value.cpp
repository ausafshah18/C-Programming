/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class test
{
    int a,b;
    public:
    void readdata(int x,int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout <<"a = " << a << endl;
        cout << "b = " << b << endl;
    }
    int big()
    {
        if(a >b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};


int main()
{
    test t;
    t.readdata(10,7);
    t.showdata();
    int Max = t.big();
    cout << Max << " is big";
    getch();
}
