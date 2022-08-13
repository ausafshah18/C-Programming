/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class sample
{
    static int a,b;
    public:
    static void getdata()
    {
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int sample :: a;
int sample :: b;


int main()
{
    sample s;
    s.getdata();
    sample :: getdata();

}
