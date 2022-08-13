#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
        try
        {
            cout << "Before throw\n";
            throw 1;
            cout << "After throw\n";
        }
        catch(int x)
        {
            cout << x << " is printed"<<endl;
        }
        cout << "Thank you";

}
