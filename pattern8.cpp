// A A A
// B B B
// C C C

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    // char start = 'A';

    while (row <= n)
    {
        char start = 'A';

        int col = 1;
        while (col <= n)
        {
            cout << start << " ";
            start++;
            col++;
        }
        // start++;
        row++;
        cout << endl;
    }
    return 0;
}