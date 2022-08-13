#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class test
{
    int a;
    public:
    
    void get()
    {
        cin >> a;
    }
    void  compare(test t2)
    {
        if(a == t2.a)
        {
            cout << "Objects are equal";
        }
        else
        {
            cout << "Objects are not equal";
        }
    }
};

int main()
{
    test t1,t2;
    cout << "Enter t1 object a value: ";
    t1.get();
    cout << "Enter t2 object a value: ";
    t2.get();
    t1.compare(t2);
}
