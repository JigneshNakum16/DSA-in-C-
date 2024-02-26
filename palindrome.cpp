#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    long long temp = x;
    long long digit = 0;
    while (x != 0)
    {
        long long rem = x % 10;
        digit = (digit * 10) + rem;
        x /= 10;
    }
    if (temp >= 0 && temp == digit)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    bool idd = isPalindrome(121);
    if (idd){
        cout << "Palindrome" << endl;
    }else{
        cout << "is not Palindrome" << endl;
    }
    return 0;
}