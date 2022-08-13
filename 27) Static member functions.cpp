/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class test
{
    public:
    static void read(int x,int y)
    {
        if(x > y)
        {
            cout << "x is big";
        }
        else if(y > x)
        {
            cout << "y is big";
        }
        else
        {
            cout << "Both are equal";
        }
    }
};

int main()
{
    test t1;
    t1.read( 10 , 7 );
    test :: read(20,33);
    test :: read(5,5);
}
