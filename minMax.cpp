#include <iostream>
using namespace std;

int getMax(int num[], int size)
{
    int maxi = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        // maxi = max(maxi, num[i]);
        if (num[i] > maxi)
        {
            maxi = num[i];
        }
    }
    return maxi;
}

int getMin(int num[], int size)
{
    int mini = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        // mini = min(mini, num[i]);
        if (num[i] < mini)
        {
            mini = num[i];
        }
    }
    return mini;
}

int main()
{
    int size;

    cout << "Enter the number of value : ";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value of : " << getMax(num, size) << endl;
    cout << "Minimum value of : " << getMin(num, size) << endl;

    return 0;
}