#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

class stu
{
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout << "Enter stu id, name: ";
        cin >> id >> name;
    }
};

int main()
{
   stu s;
   ofstream file;
   file.open("stu.dat");
   char op;
   do
   {
    s,getstu();
    file.write((char *)&s,sizeof(s));
    cout << "One row created\n";
    cout << "Any more students[Y/N]";
    cin >> op;
   }while(op == 'Y'||op == 'y');
   file.close();
}