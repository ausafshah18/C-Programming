/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class stu;

class stu
{
    int id;
    char name[20];
    public:
    void readstu()
    {
        cout << "Enter student id,name: ";
        cin >> id >> name;
    }
    void showstu();
};
void stu :: showstu()
{
    cout << "stu id = " << id << endl;
    cout << "name = " << name;
}

int main()
{
    stu s;
    s.readstu();
    s.showstu();
    getch();
}
