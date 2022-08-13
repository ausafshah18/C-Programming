/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class stu
{
   int id;
   char name[20];
   public:
   void getstu();
   void putstu();
};

void stu :: getstu()
{
    cin >> id >> name;
}
void stu :: putstu()
{
    cout << id << "\t"<< name << endl;
}

int main()
{
    stu s[60];
    int n,i;
    cout << "Enter  no.of students [1-60]";
    cin >> n;
    if(n < 1 || n > 60)
    {
        cout << "value 1-60 only";
    }
    else
    {
        for(i  = 0;i < n;i++)
        {
            s[i].getstu();
        }
        cout << "Id \t Name\n";
        cout << "_______\n";
        for(i = 0;i < n;i++)
        {
            s[i].putstu();
        }
        getch();
    }
}
