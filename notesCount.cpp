#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter the amount : ";
    cin >> amount;

    int hundred = 0, fifty = 0, twenty = 0, one = 0;

    switch (amount >= 100)
    {
    case 1:
        hundred = amount / 100;
        amount -= hundred * 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        fifty = amount / 50;
        amount -= fifty * 50;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        twenty = amount / 20;
        amount -= twenty * 20;
        break;
    }
    switch (amount >= 1)
    {
    case 1:
        one = amount / 1;
        amount -= one * 1;
        break;
    }

    cout << "100's notes " << hundred << endl;
    cout << "50's notes " << fifty << endl;
    cout << "20's notes " << twenty << endl;
    cout << "1's notes " << one << endl;

    return 0;
}
