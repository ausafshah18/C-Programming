/* Lowest common Ancestor */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
    int **p , nr, nc, r, c;
    cout << "Enter no.of rows & columns: ";
    cin >> nr >> nc;
    p = new int*[nr];

    for(r = 0; r < nr;r++)
    {
        p[r] = new int [nc];
    }
    cout << "Enter " << nr*nc << " elements";
    for(r = 0;r < nr;r++)
    {
        for(c = 0;c < nc;c++)
        {
            cin >> p[r][c];
        }
    }
    cout << "Elements are \n";
    for(r = 0;r < nr;r++)
    {
        for(c = 0; c < nc;c++)
        {
            cout << p[r][c] << ends;
        }
        cout << endl;
    }
    delete p;
    getch();
}
