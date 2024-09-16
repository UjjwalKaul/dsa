#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }
    return rev;
}

int main()
{
    cout << reverseNum(7789); // Prints 9877
    return 0;
}