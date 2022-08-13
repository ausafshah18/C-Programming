/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class test1
{
    int a,b;
    public:
    friend class test2;
    void getab()
    {
        cout << "Enter a,b value: ";
        cin >> a >> b;
    }
};
class test2
{
    public:
    void putb(test1 t1)
    {
        cout << "a = "<< t1.a << endl;
        cout << "b = " << t1.b;
    }
};
int main()
{
    test1 t1;
    test2 t2;
    t1.getab();
    t2.putb(t1);
}
