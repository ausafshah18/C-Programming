/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

struct stu
{
    int id;
    char name[20];

    void getdata()
    {
        cout << "Enter stu id,name: ";
        cin >> id >> name;
        cout << "Id = " << id << endl;
        cout << "Name = " << name;
    }
};

int main()
{
    stu s;
    s.getdata();
    getch();
}
