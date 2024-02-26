#include <iostream>
using namespace std;

int main()
{
    char ch = '1';
    int num = 1;

    switch (ch)
    {
        {
        case 1:
            cout << "First " << endl;
            break;

        case '1':
            switch (num)
            {
            case 1:
                cout << "First number is again " << endl;
                break;

            default:
                cout << "Invalid integer number " << endl;
                break;
            }
            break;

        default:
            cout << "Invalid string input " << endl;
            break;
        }
        return 0;
    }
}