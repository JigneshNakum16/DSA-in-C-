#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        // print space
        while (space)
        {
            cout << " ";
            space--;
        }
        // print 1st triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        // print 2nd triangle
        // int col2 = row;
        // int col3 = 2;

        // while (col3 <= col2)
        // {
        //     cout << col2 - 1;
        //     col2--;
        // }

        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}