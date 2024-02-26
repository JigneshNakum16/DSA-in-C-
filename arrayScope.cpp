#include <iostream>
using namespace std;

void update(int arr[])
{
    cout << "inside of function " << endl;

    arr[0] = 12;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "going back to main function" << endl;
}

int main()
{

    int arr[3] = {1, 3, 5};

    update(arr);

    cout << "printing main function arrays " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}