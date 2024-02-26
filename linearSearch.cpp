#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {5, 8, 9, 58, 68, 2, -5, 33, 28, -8};

    cout << "Enter the key element  : ";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is found " << endl;
    }
    else
    {
        cout << "key is not found " << endl;
    }
    return 0;
}