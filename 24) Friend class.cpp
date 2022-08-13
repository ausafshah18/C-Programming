/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class author
{
    char aname[20];
    friend class book;
};
class book
{
    char bname[20];
    float price;
    author a;
    public:
    void getdata()
    {
        cout << "Enter author name: ";
        cin >> a.aname;
        cout << "Enter book name: ";
        cin >> bname;
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata()
    {
        cout << "author name = " << a.aname<<endl;
        cout << "Book name = " << bname << endl;
        cout << "Price = " << price << endl; 
    }
};
int main()
{
    book b;
    b.getdata();
    b.putdata();
    getch();
}
