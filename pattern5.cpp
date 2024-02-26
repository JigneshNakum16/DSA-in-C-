// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int count = 0;
    // for (int row = 0; row <= n; row++)
    // {
    //     count = 0;
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << row + count++ << " ";
    //     }
    //     cout << endl;
    // }

    int row = 1, toPrint = 1;
    while (row <= n)
    {
        // int col = 1;
        // toPrint = row;
        int col = row;
        // while (col <= row)
        while (col < row * 2)

        {
            cout << col << " ";
            // cout << toPrint << " ";
            // toPrint++;
            col++;
        }
        cout << endl;
        row++;
    }
}