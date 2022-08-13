/* Lowest common Ancestor */
#include <bits/stdc++.h>
using namespace std;

int sum(int x = 1,int y = 2,int z = 3)
{
    return x+y+z;
}

int main()
{
    cout << sum(10,20,30) << endl;
    cout << sum(10,20) << endl;
    cout << sum(10) << endl;
    cout << sum() << endl;
}
