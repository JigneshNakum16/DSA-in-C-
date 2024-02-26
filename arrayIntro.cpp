#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Printing Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declare
    int num[24];

    // accessing an array
    cout << "value at 23 index : " << num[23] << endl;
    // cout << "Value at 56 index " << num[56] << endl;    // thrown garbage values

    // initialising an array

    int second[3] = {4, 6, 3};
    cout << "value at 2 index : " << second[2] << endl;

    // initialising an array
    int third[15] = {2, 7};

    int n = 15;
    // printArray(third, 15);
    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of Third is " << thirdSize << endl;
    // initialising all locations with 0
    int fourth[10] = {0};

    n = 10;
    printArray(fourth, 10);

    // initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

    n = 10;
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of Fifth is " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;

    cout << "printing the array " << endl;
    // print the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl
         << "printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << endl
         << "Everything is Fine " << endl
         << endl;
    return 0;
}