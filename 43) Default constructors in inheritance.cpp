#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Base class constructor" << endl;
    }
};
class der : public base
{
    public:
    der()
    {
        cout << "Derived class constructor" << endl;
    }
};

int main()
{
    der d;
}
