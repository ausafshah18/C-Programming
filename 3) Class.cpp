
#include<bits/stdc++.h> 
using namespace std; 

class stu
{
    private:
    int id;
    char name[20];
    float fee;

    public:
    void get()
    {
        cout << "Enter id,name,fee: ";
        cin >> id >> name >> fee;
    }
    void put();
};
void stu :: put()
{
    cout << "Id = " << id << endl;
    cout << "Name = " << name << endl;
    cout << "Fee = " << fee;
}


int main() 
{
    stu s;
    s.get();
    s.put();
}

