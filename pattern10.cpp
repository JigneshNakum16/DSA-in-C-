#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // char start = 'A' + i - 1;
        while (j <= n)
        {

            char ch = 'A' + i + j - 2;  
            // char ch = i + j + 64 - 1;
            cout << ch;
            // cout << start;
            // start++;
            j++;
        }

        cout << endl;
        i++;
    }
    return 0;
}