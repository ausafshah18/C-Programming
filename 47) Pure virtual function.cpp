#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class shape
{
    protected:
    float d1,d2;
    public:
    void getdim()
    {
        cin >> d1 >> d2;
    }
    virtual float area() = 0;
};

class triangle : public shape
{
    public:
    virtual float area() // in abstract class dont use virtual here in redefining the virtual function
    {
        return 0.5*d1*d2;
    }
};
class rectangle : public shape
{
    public:
    virtual float area() // in abstract class dont use virtual here in redefining the virtual function
    {
        return d1*d2;
    }
};
int main()
{
    triangle t;
    cout << "ENter triangle base , height : ";
    t.getdim();
    cout << "Area = " <<t.area() << endl;
    rectangle r;
    cout << "Enter rectangle length and breadth: ";
    r.getdim();
    cout << "Area =" << r.area();
}
