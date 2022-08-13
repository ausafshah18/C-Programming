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
class phy: public stu
{
    float h,w;
    public:
    void getphy()
    {
        cout << "Enter stu height & weight";
        cin >> h >> w;
    }
    void putphy()
    {
        cout << "Height = " << h << endl;
        cout << "Weight = "<< w;
    }
};
int main()
{
    phy p;
    p.getstu();
    p.getphy();
    p.putstu();
    p.putphy();

}
