#include <bits/stdc++.h>
using namespace std;

bool armStrong(int n)
{
    int sum = 0;
    int real = n;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    };
    return sum == real;
}

int main()
{
    cout << armStrong(371) << endl; // Returns 1
    cout << armStrong(35) << endl;  // Returns 0
    return 0;
}