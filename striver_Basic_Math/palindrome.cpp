#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    if (n < 0)
        return false; // Negative numbers are not palindromes

    int rev = 0, real = n;

    while (n > 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    return rev == real; // Directly return the comparison result
}

int main()
{
    cout << palindrome(121); // Returns 1 (true)
    return 0;
}
