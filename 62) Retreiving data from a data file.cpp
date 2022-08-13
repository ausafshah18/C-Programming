#include <bits/stdc++.h>
#include <fstream>
#include <conio.h>
using namespace std;

class stu
{
    int id;
    char name[20];
    public:
    void putstu()
    {
        cout << id << "\t" << name << endl;
    }
};

int main()
{
   stu s;
   ifstream file("stu.dat",ios::in);
   file.read((char *)&s,sizeof(s));
   cout << "Id\tName\n";
   cout << "______\n";
   while(!file.eof())
   {
    s.putstu();
    file.read((char *)&s,sizeof(s));
   }
   file.close();

}