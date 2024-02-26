#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cout << "Enter the Decimal number : ";
    cin >> n;
    long long ans = 0;
    long long i = 0;

    while (n != 0)
    {

        long long bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "Binary number is : " << ans;

    return 0;
}