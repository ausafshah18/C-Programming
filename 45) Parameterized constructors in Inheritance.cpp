#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class stu
{
    char name[20] , course[20];
    public:
    stu()
    {

    }
    stu(char name[20], char course[20])
    {
        strcpy(this->name,name);
        strcpy(this->course,course);
    }
    void showstu()
    {
        cout << "Name : "<<name <<endl;
        cout << "Course :" << course << endl;
    }
};
class marks : public stu
{
    int m,p,c;
    public:
    marks(char name[20],char course[20],int m,int p,int c)
    {
        stu :: stu(name,course);
        this->m = m;
        this->p = p;
        this->c = c;
    }
    void showmarks()
    {
        cout <<m << " " << p << " " << c;
    }
};

int main()
{
    marks m("Rams","mpe",60,72,85);
    m.showstu();
    m.showmarks();
}
