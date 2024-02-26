#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {4, 63, 2, 4, -6, 3};
    int arr1[5] = {5, 3, 6, -32, 3};

    reverseArray(arr, 6);
    reverseArray(arr1, 5);

    printArray(arr, 6);
    printArray(arr1, 5);

    return 0;
}