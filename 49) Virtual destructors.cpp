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
    virtual ~ base()
    {
        cout << "Base class destructor" << endl;
    }
};
class der : public base
{
    public:
    der()
    {
        cout <<"Derived class constructor" << endl;
    }
    ~der()
    {
        cout << "Derived class destructor" << endl;
    }
};
int main()
{
    base *b = new der;
    delete b;
    
}
