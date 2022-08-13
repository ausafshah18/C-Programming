/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    int *p = new int[n];
    for(int i = 0;i <n;i++)
    {
        cin >> p[i];
    }
    cout << "Elements are: "<< endl;
    for(int i = 0;i < n; i++)
    {
        cout << p[i] << " ";
        
    }
    delete p;
    getch();
}
