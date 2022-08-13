/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;



class emp
{
    int empid;
    char ename[20];
    float sal;
    public:
    void getemp(int id, char name[20], float basic);
    void putemp();
};
void emp :: getemp(int id ,char name[20], float basic)
{
    empid = id;
    strcpy(ename, name);
    sal = basic;
}
void emp :: putemp()
{
    cout << "Empid = " << empid << endl;
    cout << "Ename  " << ename << endl;
    cout << "sal = " << sal; 
}


int main()
{
    emp e;
    e.getemp(101,"Kishor", 10000);
    e.putemp();
}
