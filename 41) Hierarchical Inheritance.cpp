#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class acc
{
    int acno;
    char name[20];
    public:
    void getacc()
    {
        cout << "ENter acno, name: ";
        cin >> acno >> name;
    }
    void putacc()
    {
        cout << "Acno" << acno << endl;
        cout << "name =" << name << endl;
    }
};
class saving : public acc
{
    float bal;
    public:
    void getbal()
    {
        cout << "Enter balance: ";
        cin >> bal;
        if(bal < 500)
        {
            cout << "Min bal 500";
        }
        else
        {
            cout << "Account created";
        }
    }
};
class curr : public acc
{
    float bal;
    public:
    void getbal()
    {
        cout << "Enter balance: ";
        cin >> bal;
        if(bal < 1000)
        {
            cout << "Min bal 1000";
        }
        else
        {
            cout << "acc created";
        }
    }
};
int main()
{
    int op;
    cout << "1. Saving A/C\n";
    cout << "2. Current A/C\n";
    cout << "Enter your option: ";
    cin >> op;
    if(op == 1)
    {
        saving s;
        s.getacc();
        s.getbal();
    }
    else if(op == 2)
    {
        curr c;
        c.getacc();
        c.getbal();
    }
    else
    {
        cout << "Invalid selection ";
    }

}
