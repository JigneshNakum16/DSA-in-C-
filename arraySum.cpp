#include <iostream>
using namespace std;

void sumOfArray(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of Array elements : " << sum << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[5] = {2, 7, -4, 11, 1};

    sumOfArray(arr, size);
    return 0;
}