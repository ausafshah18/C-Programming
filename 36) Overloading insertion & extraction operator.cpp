#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class stu
{
    int id;
    char name[20];
    public:
    friend void operator >>(istream &in, stu &s)
    {
        cout << "Enter stu id , name";
        in >> s.id >> s.name;
    }

    friend void operator << (ostream &out, stu &s)
    {
        out << "Id = " << s.id << endl;
        out << "Name = " << s.name;
    }
};

int main()
{
    stu s;
    cin >> s;
    cout << s;
}
