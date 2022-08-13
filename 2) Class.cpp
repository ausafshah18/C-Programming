
#include<bits/stdc++.h> 
using namespace std; 

class stu
{
    private:
    int id;
    char name[20];
    float fee;

    public:
    void get();
};
void stu :: get()
{
    cout << "Enter id,name,fee: ";
    cin >> id >> name >> fee;
    cout << "Id = " << id << endl;
    cout << "Name = " << name << endl;
    cout << "Fee = " << fee;
}


int main() 
{
    stu s;
    s.get()  ;
}

