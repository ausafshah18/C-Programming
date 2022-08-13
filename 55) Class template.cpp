#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

template <class t>
class test
{
    t a,b;
    public:
    void get()
    {
        cin >> a >>b;
    }
    t sum();
};
template <class t>
t test <t>::sum()
{
    return a+b;
}

int main()
{
    test <int> t1;
    test <float> t2;
    cout << "Enter two integers: ";
    t1.get();
    cout << "SUm = " << t1.sum() << endl;
    cout << "Enter two floats: ";
    t2.get();
    cout << "SUm = " << t2.sum();
    
}
