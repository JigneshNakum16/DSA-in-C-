#include <iostream>
using namespace std;

int hammingWeight(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {

            count++;
        }
    n = n >> 1;
    }
    return count;
}
int main()
{
    int num = 00000000000000000000000000001011;
    int weight = hammingWeight(num);

    cout << weight << endl;

    return 0;
}
