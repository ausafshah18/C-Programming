/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class sample
{
    static int count;
    public:
    sample()
    {
        count++;
        cout << count << "obj created\n";
    }
    ~sample()
    {
        cout << count << "Object deleted\n";
        count--;
    }
};

int sample :: count;

int main()
{
    sample s1,s2;
}
