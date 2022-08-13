#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class test
{
    public: 
    test()
    {
        cout << "I am the constructor\n";
    }
    ~test()// destructor
    {
        cout << "I am the destructor\n";
    }
};

int main()
{
    try
    {
        cout << "Welcome to exception handling\n";
        test t;
        throw 10;
        cout << "Testing destructor\n";
    }
    catch(...)
    {
        cout << "Thank you";
    }
}