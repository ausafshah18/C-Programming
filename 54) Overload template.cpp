#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

template <class t>
t sum(t a, t b)
{
    return a+b;
}
template <class t>
t sum(t a,t b,t c)
{
    return a+b+c;
}

int main()
{
    cout << "Two int sum = " << sum(10,20) << endl;
    cout << "Two floats sum = " << sum(1.1,2.2) << endl;
    cout << "Three floats sum = " << sum(1.1,2.2,3.3) << endl;
    cout << "Three int sum = " << sum(1,2,3) << endl;
}
