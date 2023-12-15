#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // print 1st triangle
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col++;
        }

        // // print 2nd triangle
        col = 1;
        while (col <= (row - 1) * 2)
        {
            cout << "*";
            col++;
        }

        // print 3rd triangle
        // int third = 1;
        // while (third <= row - 1)
        // {
        //     cout << "*";
        //     third++;
        // }

        // print 4nd triangle
        col = n - row + 1;
        while (col >= 1)
        {
            cout << col;
            col--;
        }
        

        // int fourth = 1;
        // while (fourth <= n - row + 1)
        // {
        //     int four = n - fourth + 2 - row;
        //     cout << four;
        //     four--;
        //     fourth++;
        // }

        cout << endl;
        row++;
    }

    return 0;
}