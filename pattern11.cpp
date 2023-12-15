#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int j = 1;
        char start = 'A' + n - row;
        while (j <= row)
        {
            cout << start ;
            start = start + 1;
            j++;
        }
        cout << endl;
        row++;
    }
    return 0;
}