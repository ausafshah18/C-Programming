/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class stu
{
   int id, sub[6];
   char name[20];
   public:
   void getstu();
   void result();
};

void stu :: getstu()
{
    cout << "Enter stu id, name";
    cin >> id >> name;
    cout << "Enter 6 sub marks: ";
    for(int i = 0;i < 6;i++)
    {
        cin >> sub[i];
    }
}
void stu :: result()
{
    int tot = 0;
    float avg;
    for(int i = 0;i < 6;i++)
    {
        tot += sub[i];
    }
    avg = tot/6.0;
    cout << "Total = " << tot << endl;
    cout << "Avg = " << avg << endl;
    cout << "Result = ";
    for(int i = 0;i < 6;i++)
    {
        if(sub[i] < 35)
        {
            cout << "Fail";
            goto last;
        }
        cout << "pass";
    }
    last:
    getch();
}

int main()
{
    stu s;
    s.getstu();
    s.result();
}
