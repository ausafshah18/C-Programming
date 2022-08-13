#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class stu
{
    private:
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout << "ENter student id name: ";
        cin >> id >> name;
    }
    void putstu()
    {
        cout << "Id =" << id << endl;
        cout << "name =" << name << endl;
    }
};
class marks
{
    protected:
    int m1,m2,m3;
    public:
    void getmarks()
    {
        cout << "Enter 3 sub marks: ";
        cin >> m1 >> m2 >> m3;
    }
    void putmarks()
    {
        cout << "M1 = " << m1 << endl;
        cout << "M2 = " << m2 << endl;
        cout << "M3 = " << m3 << endl;
    }
};
class result : public stu ,public marks
{
    int tot;
    float avg;
    public:
    void show()
    {
        tot = m1+m2+m3;
        avg = tot/3.0;
        cout << "Tot = " << tot <<endl;
        cout << "Avg = " << avg;
    }
};
int main()
{
    result r;
    r.getstu();
    r.getmarks();
    r.putstu();
    r.putmarks();
    r.show();

}
