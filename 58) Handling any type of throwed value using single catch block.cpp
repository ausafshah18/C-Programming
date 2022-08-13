#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
        try
        {
            std::cout << "Testing any exception"<<endl;
            throw 1.2;
        }
        catch(...)
        {
            std::cout <<"Catched the throw value";
        }
}
