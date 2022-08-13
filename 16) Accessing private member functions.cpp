/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class emp
{
   private:
   int id;
   char name[20];
   float sal;
   void getemp()
   {
    cout << "Enter empid, name,sal: ";
    cin >> id >> name >> sal;
   }
   public:
   void putemp()
   {
    getemp();
    cout << id << name << sal;
   }
    
};

int main()
{
    emp e;
    e.putemp();
}
