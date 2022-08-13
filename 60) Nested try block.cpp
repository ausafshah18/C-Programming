#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
    try
    {
        cout << "Welcome\n";
        try
        {
            cout << "To inner try block\n";
            throw 10;
        }
        catch(int x)
        {
            cout << "throw working\n";
            throw x;
        }
    }
    catch(int y)
    {
        cout << "Outer try block";
    }
}