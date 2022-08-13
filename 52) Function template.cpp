#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

template <class t1, class t2>
float sum(t1 x,t2 y)
{
    return x+y;
}

int main()
{
    cout << "Int sum = " << sum(10,20) << endl;
    cout << "Float sum = " << sum(1.2,2.3) << endl;
    cout << "Int , float sum = " << sum(5,2.5) << endl;
    cout << "Float , Int sum = " << sum(1.1,2) << endl;
}
