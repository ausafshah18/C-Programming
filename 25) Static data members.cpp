/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class test
{
    public:
    static int a;
    void get()
    {
        cout << "a = " << a << endl;
    }
};

int test :: a = 10;

int main()
{
    test :: a = 100;
    cout << "a = " << test :: a << endl;
    test t;
    t.get();
    getch();
}
